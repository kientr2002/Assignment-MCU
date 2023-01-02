/*
 * man_fsm.c
 *
 *  Created on: Dec 5, 2022
 *      Author: 84336
 */
#include "man_fsm.h"

void man_fsm_run() {
	switch (status) {

	case MAN_INIT:
		Traffic1_Off();
		Traffic2_Off();
		Traffic3_Off();
		buzzer_off();

		if (Button2_Is_Pressed() == 1) {
			status = MAN_RED1_GREEN2;
			SetTimer1(3000);
		}
		break;

	case MAN_RED1_GREEN2:
		RED_1();
		GREEN_2();
		GREEN_3();

		if (timer1_flag == 1 || Button2_Is_Pressed() == 1) {
			status = MAN_RED1_YELLOW2;
			SetTimer1(2000);
		}
		if (Button1_Is_Pressed() == 1) {
			status = TUN_INIT;
		}
		break;

	case MAN_RED1_YELLOW2:
		YELLOW_2();
		RED_1();
		GREEN_3();

		if (timer1_flag == 1 || Button2_Is_Pressed() == 1) {
			status = MAN_GREEN1_RED2;
			SetTimer1(3000);
		}
		if (Button1_Is_Pressed() == 1) {
			status = TUN_INIT;
		}
		break;

	case MAN_GREEN1_RED2:
		GREEN_1();
		RED_2();
		RED_3();

		if (timer1_flag == 1 || Button2_Is_Pressed() == 1) {
			status = MAN_YELLOW1_RED2;
			SetTimer1(2000);
		}
		if (Button1_Is_Pressed() == 1) {
			status = TUN_INIT;
		}
		if (Button4_Is_Pressed() == 1)
		{
			status = PED_STATE;
			SetTimer4(3000);
		}
		break;

	case MAN_YELLOW1_RED2:
		YELLOW_1();
		RED_2();
		RED_3();
		buzzer_off();

		if (timer1_flag == 1 || Button2_Is_Pressed() == 1) {
			status = MAN_RED1_GREEN2;
			SetTimer1(3000);
		}
		if (Button1_Is_Pressed() == 1) {
			status = TUN_INIT;
		}
		if (Button4_Is_Pressed() == 1) {
			status = PED_STATE;
			SetTimer5(2000);
		}
		break;
	}
}
