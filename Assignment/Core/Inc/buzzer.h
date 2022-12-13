/*
 * buzzer.h
 *
 *  Created on: Dec 13, 2022
 *      Author: ADMIN
 */

#ifndef INC_BUZZER_H_
#define INC_BUZZER_H_

#define htim                    htim3
#define TIM_CHANNEL             TIM_CHANNEL_1
#define TIMER                   TIM3

#include "global.h"

void buzzer_ring();
void buzzer_off();

extern TIM_HandleTypeDef htim3;

#endif /* INC_BUZZER_H_ */
