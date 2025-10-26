/*
 * dl_Aktoren.c
 *
 *  Created on: 21.10.2025
 *      Author: danie
 */

#include "dl_Aktoren.h"
#include <msp430.h>

void dl_SetSteering(int8_t iValue)
{
    if(iValue >= -100 || iValue <= 100)
    {
        TA1CCR2 = 10*iValue + 3750;
    }
}
