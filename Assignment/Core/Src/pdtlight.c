/*
 * pdtlight.c
 *
 *  Created on: Dec 6, 2022
 *      Author: Admin
 */

#include "pdtlight1.h"

void RED_3() {
	HAL_GPIO_WritePin(D7_GPIO_Port, D7_Pin, RESET);
	HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, SET);
}

void GREEN_3() {
	HAL_GPIO_WritePin(D7_GPIO_Port, D7_Pin, SET);
	HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, RESET);
}

void Traffic3_Off() {
	HAL_GPIO_WritePin(D7_GPIO_Port, D7_Pin, RESET);
	HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, RESET);
}
