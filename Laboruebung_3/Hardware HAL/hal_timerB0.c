/*
 * timerB0.c
 *
 *  Created on: 12.11.2025
 *      Author: danie
 */
#include "hal_timerB0.h"

void timerB0_init()
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
