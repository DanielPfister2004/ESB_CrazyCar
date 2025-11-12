/*
 * hal_timerA1.c
 *
 *  Created on: 21.10.2025
 *      Author: danie
 */

#include <msp430.h>
#include "hal_timerA1.h"

void hal_timerA1_Init()
{
    TA1CTL = 0;
    TA1CTL |= TASSEL__SMCLK + TACLR + MC__UP;   // clear timer, clk = SMCKL, up-Mode

    TA1CCTL0 = 0;            // set to zero initialy
    TA1CCTL0 &= ~CAP;        // comapre mode
    TA1CCTL0 |= CCIE;        // interrupt enable

    TA1CCTL1 = 0;            // set to zero initialy
    TA1CCTL1 &= ~CAP;        // comapre mode
    TA1CCTL1 |= OUTMOD_7;    // reset/set

    TA1CCTL2 = 0;            // set to zero initialy
    TA1CCTL2 &= ~CAP;        // comapre mode
    TA1CCTL2 |= OUTMOD_7;    // reset/set

    TA1CCR0 = 41667;         // für 60Hz @ 2,5MHz
    TA1CCR1 = 0;             // CCR1 throttle
    TA1CCR2 = 0;             // CCR2 steering

}




