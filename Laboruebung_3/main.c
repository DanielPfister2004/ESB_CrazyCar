#include <hal_gpio.h>
#include <hal_general.h>

#include <stdint.h>  // for uint32_t or other variables


void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
    hal_init();

    while (1)
    {

    }
}




