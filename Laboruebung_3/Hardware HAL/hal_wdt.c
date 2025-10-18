/*
 * hal_wdt.c
 *
 *  Created on: 30.09.2025
 *      Author: danie
 */

#include "hal_wdt.h"
#include <msp430.h>

void hal_WdtInit()
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
}
