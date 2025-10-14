#include <hal_gpio.h>
#include <hal_general.h>


/**
 * main.c
 */
void main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	hal_init();
}
