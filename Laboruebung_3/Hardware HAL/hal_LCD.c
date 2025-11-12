/*
 * hal_LCD.c
 *
 *  Created on: 12.11.2025
 *      Author: danie
 */

#include "hal_LCD.h"

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
