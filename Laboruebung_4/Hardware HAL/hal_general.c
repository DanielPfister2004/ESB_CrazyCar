#include "hal_general.h"
#include "hal_pmm.h"
#include "hal_wdt.h"
#include "hal_gpio.h"
#include "hal_ucs.h"


void hal_init()
{
    HAL_PMM_Init();
    hal_GpioInit();
    hal_ucsInit();
    hal_timerA1_Init();
}


void LCD_BL_OFF()
{
    // LOW off
    P8OUT &= ~LCD_BL;
}

void LCD_BL_ON()
{
    // HIGH on
    P8OUT |= LCD_BL;
}


// enable Interrupt for START_BUTTON PORT1 BIT6
void enableInterrupts()
{
    P1DIR &= ~(START_BUTTON + STOP_BUTTON);
    P1REN |= (START_BUTTON+ STOP_BUTTON);
    P1OUT |= (START_BUTTON+ STOP_BUTTON);
    P1IE |= (START_BUTTON+ STOP_BUTTON);
    P1IES &= ~(START_BUTTON + STOP_BUTTON);      //rising edge
    //P1IES |= (START_BUTTON + STOP_BUTTON);       //falling edge
    P1IFG &= ~(START_BUTTON + STOP_BUTTON);      // erasing Interrupt-flag - if not deleted, ...
                                 // ...there will be an interrupt right after the car is booted up

    __enable_interrupt(); // GIE ... global interrupt enable
}



