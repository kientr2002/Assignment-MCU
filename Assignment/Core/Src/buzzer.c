/*
 * buzzer.c
 *
 *  Created on: Dec 13, 2022
 *      Author: ADMIN
 */
#include "buzzer.h"

void buzzer_ring() {
	__HAL_TIM_SetCompare(&htim3, TIM_CHANNEL_1, 10);
	//HAL_Delay(1000);
}

void buzzer_off() {
	 __HAL_TIM_SetCompare(&htim3, TIM_CHANNEL_1, 1);
	//HAL_Delay(1000);
}





