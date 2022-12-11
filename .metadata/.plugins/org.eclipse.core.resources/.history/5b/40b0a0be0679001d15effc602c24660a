/*
 * software_timer.c
 *
 *  Created on: Nov 30, 2022
 *      Author: 84336
 */
#include "software_timer.h"

int timer1_flag = 0, timer1_counter = 0;
int timer_red_flag = 0, timer_red_counter = 0;
int timer_yellow_counter = 0, timer_yellow_flag = 0;
int timer_green_counter = 0, timer_green_flag = 0;
int timer_pedes_counter = 0, timer_pedes_flag = 0;

void SetTimer1 (int duration) {
	timer1_counter = duration / TICK;
	timer1_flag = 0;
}

void TimerRun () {
	if (timer1_counter > 0) {
		timer1_counter--;
		if (timer1_counter <= 0) {
			timer1_flag = 1;
		}
	}
	if (timer_red_counter  <= 0) {
			timer_red_flag = 1;
		}
	if (timer_yellow_counter <= 0) {
			timer_yellow_flag = 1;
		}
	if (timer_green_counter <= 0) {
			timer_green_flag = 1;
		}
	if (timer_pedes_counter > 0) {
		timer_pedes_counter--;
		if (timer_pedes_counter <= 0) {
			timer_pedes_flag = 1;
		}
	}
}

void IncRed5s (int duration) {
	timer_red_counter = duration / TICK;
	timer_red_counter--;
	timer_red_flag = 0;
}

void IncYellow2s (int duration) {
	timer_yellow_counter = duration / TICK;
	timer_yellow_counter--;
	timer_yellow_flag = 0;
}

void IncGreen3s (int duration) {
	timer_green_counter = duration / TICK;
	timer_green_counter--;
	timer_green_flag = 0;
}

void SetTimerForPed (int duration)
{
	timer_pedes_counter = duration / TICK;
	timer_pedes_flag = 0;
}


