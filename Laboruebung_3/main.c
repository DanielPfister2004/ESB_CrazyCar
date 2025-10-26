#include <hal_gpio.h>
#include <hal_general.h>

#include <stdint.h>  // for uint32_t or other variables

void setUp();

void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
    hal_init();
    setUp();

    while (1)
    {

    }
}

void setUp()
{
    TB0CTL |= TBSSEL__SMCLK;
    TB0CTL |= ID__8;
    TB0CTL |= MC__UP;

    TB0CCR0 = 19531/2; // 2.5MHz/(8*8) * 0,5 (sind die 2Hz)
    TB0EX0 |= TBIDEX__8;  // extension
    TB0CCTL0 = CCIE;  // activating interrupt

    __enable_interrupt();
}



int cnt = 0;
#pragma vector=TIMER0_B0_VECTOR
__interrupt void TimerB0_ISR(void)
{

    if(cnt == 0)
    {
        cnt = 1;
        LCD_BL_ON();
    }
    else if(cnt == 1)
    {
        cnt = 0;
        LCD_BL_OFF();
    }

   // TB0CCTL0 &= ~CCIFG;   // Clear interrupt flag
}

