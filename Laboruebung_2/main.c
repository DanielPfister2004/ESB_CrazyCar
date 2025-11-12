#include <hal_gpio.h>
#include <hal_general.h>

#include <stdint.h>  // for uint32_t or other variables


/**
 * main.c
 */

void wait_in_ms(int time_in_ms);
void calc_float(float a, float b);
void calc_int(int a, int b);

#define BUTTON_START 1
#define BUTTON_STOP  0
volatile int cnt_stop_button = 0, cnt_start_button = 0;
extern ButtonCom CCbutton;


void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
    enableInterrupts_StartStop();
    hal_init();

    while (1)
    {
        int cnt_start = cnt_start_button;
        int cnt_stop = cnt_stop_button;


        // when display is on, it calc
        // it needs around 220us - 240us for one float calc
        // for an int calc it needs ~40us
        if(CCbutton.button == BUTTON_START)
        {
            LCD_BL_ON();
            calc_float(14.4, 24.34);
            LCD_BL_OFF();
            wait_in_ms(1);
            LCD_BL_ON();
            calc_int(124, 253);
            LCD_BL_OFF();
            wait_in_ms(1);
        }
        else if(CCbutton.button == BUTTON_STOP)
            LCD_BL_OFF();

    }
}

// Flaw: this function isn't at all precise
void wait_in_ms(int time_in_ms) // Clockspeed 20MHz
{
    int clock = 20;
    int i;
    for(i = 0; i < clock * time_in_ms; i++);
}

void calc_float(float a, float b)
{
    float sum = a + b;
}

void calc_int(int a, int b)
{
    int sum = a + b;
}


#pragma vector=PORT1_VECTOR
__interrupt void Port_1(void)
{
    // see if START_BUTTON was triggered
    if (P1IFG & START_BUTTON)
    {
        cnt_start_button++;
        CCbutton.active = 1;
        CCbutton.button = BUTTON_START;

        P1IE &= ~START_BUTTON;    // turning off interrupt
        int i = 0;
        for(i = 0; i<25000; i++); // debouncing
        // deleting Interrupt-Flag
        P1IFG &= ~START_BUTTON;
    }
    else if(P1IFG & STOP_BUTTON)   // see if STOP_BUTTON was triggered
    {
        cnt_stop_button++;
        CCbutton.active = 0;
        CCbutton.button = BUTTON_STOP;

        P1IE &= ~STOP_BUTTON;
        int i = 0;
        for(i = 0; i<25000; i++);
        P1IFG &= ~STOP_BUTTON;
    }

    P1IE  |= (START_BUTTON + STOP_BUTTON);  // turning Interrupts back on
}

