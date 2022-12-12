/*
 * ped_fsm.c
 *
 *  Created on: Dec 6, 2022
 *      Author: Admin
 */
#include "ped_fsm.h"

void ped_fsm_run() {
	switch (status) {

	case PED_RED1_RED2:
		RED_1();
		RED_2();
		GREEN_3();
		// buzzer_ring()

		if (timer1_flag == 1) {
			status = AUTO_YELLOW1_RED2;
			SetTimer1(2000);
		}
		if (timer2_flag == 1) {
			status = AUTO_RED1_GREEN2;
			SetTimer1(3000);
		}
		break;
	}
}

