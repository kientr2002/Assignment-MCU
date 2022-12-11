/*
 * ped_fsm.c
 *
 *  Created on: Dec 6, 2022
 *      Author: Admin
 */
#include "ped_fsm.h"

void ped_fsm_run() {
	switch (status) {

	case PED_RED:
		GREEN_1();
		YELLOW_2();
		RED_3();
		if (timer1_flag == 1) {
			Traffic3_Off();
			status = AUTO_YELLOW;
			SetTimer1(2000);
		}
		break;

	case PED_GREEN:
		RED_1();
		GREEN_2();
		GREEN_3();

		if (timer1_flag == 1) {
			Traffic3_Off();
			status = AUTO_GREEN;
			SetTimer1(3000);
		}
		break;

	default:
		break;
	}
}

