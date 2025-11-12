/*
 * dl_Aktoren.h
 *
 *  Created on: 21.10.2025
 *      Author: danie
 */

#ifndef DRIVER_DL_DL_AKTOREN_H_
#define DRIVER_DL_DL_AKTOREN_H_

#include <stdint.h>  // for uint32_t or other variables

extern volatile int speed_controller_impuls;

#define MaxRPW  1000
#define MinRPW  2000
#define MinFPW  3000
#define MaxFPW  4000
#define MaxBreak 2500

#define MAX_LEFT    2750
#define MAX_RIGHT   4750
#define MIDDLE      3750

void driver_ESCinit(void);
void createPulses(int pwm, int pulseDuration);

void dl_SetSteering(int8_t iValue);
void dl_SetThrottle(int8_t iValue);

#endif /* DRIVER_DL_DL_AKTOREN_H_ */
