/*
 * ped_fsm.c
 *
 *  Created on: Dec 6, 2022
 *      Author: Admin
 */
#include "ped_fsm.h"

void ped_fsm_run() {
	switch (status) {

	case PED_STATE:
		RED_1();
		GREEN_3();
		buzzer_ring();

		if (timer2_flag == 1) {
			buzzer_off();
			status = AUTO_YELLOW1_RED2;
			SetTimer1(2000);
		}
		if (timer3_flag == 1) {
			buzzer_off();
			status = AUTO_RED1_GREEN2;
			SetTimer1(3000);
		}
		if (timer4_flag == 1) {
			buzzer_off();
			status = MAN_YELLOW1_RED2;
			SetTimer1(2000);
		}
		if (timer5_flag == 1) {
			buzzer_off();
			status = MAN_RED1_GREEN2;
			SetTimer1(3000);
		}
		break;
	}
}

