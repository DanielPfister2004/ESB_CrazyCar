#include <hal_gpio.h>
#include <hal_general.h>

/**
 * main.c
 */
void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer

    hal_init();

    while (1)
    {
        LCD_BL_ON();
        calc_int(14.4, 24.34);
        wait_in_us(1);
        LCD_BL_OFF();
        wait_in_us(1);

        LCD_BL_ON();
        calc_int(12.5, 25.3);
        wait_in_us(1);
        LCD_BL_OFF();
        wait_in_us(1);

    }
}
