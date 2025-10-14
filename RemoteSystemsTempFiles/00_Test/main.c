#include <msp430.h> 


/**
 * main.c
*/

#define RPM_SENSOR BIT3  // input

int main(void)
{
	P1DIR |= RPM_SENSOR;
	
	return 0;
}
