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

    //LCD-Init
    P8DIR |= LCD_BL;
    P8REN |= LCD_BL;

    // configuration for general timers
    P7SEL |= XT2IN;
    P7SEL |= XT2OUT;
    UCSCTL6 &= ~XT2BYPASS;
    //P3DIR |= SMCLK; // configure PORT3 BIT 3 for output clock and not as GPIO
    //P3SEL |= SMCLK;

    // PORT 3
    P3DIR |= STEERING + THROTTLE;
    P3SEL |= STEERING + THROTTLE;
}


