/*
 * software_timer.h
 *
 *  Created on: Nov 30, 2022
 *      Author: 84336
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#include "main.h"

#define TICK 10

extern int timer1_flag, timer2_flag, timer3_flag, timer4_flag, timer5_flag;

void SetTimer1 (int duration);
void SetTimer2 (int duration);
void SetTimer3 (int duration);
void SetTimer4 (int duration);
void SetTimer5 (int duration);
void TimerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
