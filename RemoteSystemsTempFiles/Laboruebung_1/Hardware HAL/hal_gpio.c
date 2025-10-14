/*
 * hal_gpio.c
 *
 *  Created on: 02.10.2025
 *      Author: danie
 */
#include "hal_gpio.h"

void hal_GpioInit()
{
    // Configure directions
    P1DIR = 0x00;
    P1DIR &= ~(START_BUTTON + STOP_BUTTON + RPM_SENSOR + RPM_SENSOR_DIR);
    P1DIR |= (I2C_INT_MOTION);

    // Enabling Pins
    P1REN = 0x00;
    P1REN |= (START_BUTTON + STOP_BUTTON + RPM_SENSOR + RPM_SENSOR_DIR + I2C_INT_MOTION);

    // R_PullUp
    P1OUT |= (START_BUTTON + STOP_BUTTON + RPM_SENSOR + RPM_SENSOR_DIR);
}


