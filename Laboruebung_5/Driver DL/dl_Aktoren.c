/*
 * dl_Aktoren.c
 *
 *  Created on: 21.10.2025
 *      Author: danie
 */

#include "dl_Aktoren.h"
#include <msp430.h>
volatile int speed_controller_impuls = 0;

void dl_SetSteering(int8_t iValue)
{
    int steerVal = 10*iValue + MIDDLE;

    if(steerVal <= MAX_LEFT)
        TA1CCR2 = MAX_LEFT;
    else if(steerVal >= MAX_RIGHT)
        TA1CCR2 = MAX_RIGHT;
    else
        TA1CCR2 = steerVal;
}


void dl_SetThrottle(int8_t iValue)
{
    int driveVal = iValue;

    if(iValue == 0)
        TA1CCR1 = MaxBreak;
    else if(iValue > 0)
        TA1CCR1 = 10*iValue+3000;
    else if(iValue < 0)
        TA1CCR1 = 10*iValue+2000;
}


void driver_ESCinit(void)
{
    createPulses(MaxRPW,140);
    createPulses(MinRPW,140);
    createPulses(MinFPW,140);
    createPulses(MaxFPW,140);

    createPulses(MaxBreak, 40);
}

void createPulses(int pwm, int pulseDuration)
{
    speed_controller_impuls = 0;
    TA1CCR1 = pwm;
    while(speed_controller_impuls <= pulseDuration)
    {

    }
}

# pragma vector = TIMER1_A0_VECTOR; // pending , when TA1R counts to
__interrupt void TimerA (void)
{
    speed_controller_impuls ++;
}
