#include "hal_general.h"
#include "hal_pmm.h"
#include "hal_wdt.h"
#include "hal_gpio.h"


/*
 * hal_general.c
 *
 *  Created on: 30.09.2025
 *      Author: danie
 */


void hal_init()
{
    HAL_PMM_Init();
    hal_GpioInit();
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

void wait_in_us(int time_in_us) // Clockspeed 20MHz
{
    int clock = 20000000;
    int i;

    for(i = 0; i < clock * time_in_us; i++);
}

void calc_int(float a, float b)
{
    float sum = a + b;
}


