/*
 * auto_fsm.c
 *
 *  Created on: Nov 30, 2022
 *      Author: 84336
 *      Kien-test
 */
#include "auto_fsm.h"

void auto_fsm_run() {
	switch (status) {

	case INIT:
		Traffic1_Off();
		Traffic2_Off();
		Traffic3_Off();
		buzzer_off();

		if (Button1_Is_Pressed() == 1) {
			status = AUTO_RED1_GREEN2;
			SetTimer1(3000);
		}
		break;

	case AUTO_RED1_GREEN2: // lane1 RED lane2 GREEN
		RED_1(); // lane1 đỏ 3s
		GREEN_2();
		GREEN_3(); // đèn ng đi bộ xanh, báo hiệu ng đi bộ đc đi

		if (timer1_flag == 1) { // đỏ hết 3s
			status = AUTO_RED1_YELLOW2;
			SetTimer1(2000);
		}
		if (Button1_Is_Pressed() == 1) {
			status = MAN_INIT;
		}
		break;

	case AUTO_RED1_YELLOW2:
		RED_1();
		YELLOW_2();
		GREEN_3();

		if (timer1_flag == 1) {
			status = AUTO_GREEN1_RED2;
			SetTimer1(3000);
		}
		if (Button1_Is_Pressed() == 1) {
			status = MAN_INIT;
		}
		break;

	case AUTO_GREEN1_RED2:
		GREEN_1();
		RED_2();
		RED_3();

		if (timer1_flag == 1) {
			status = AUTO_YELLOW1_RED2;
			SetTimer1(2000);
		}
		if (Button1_Is_Pressed() == 1) {
			status = MAN_INIT;
		}
		if (Button4_Is_Pressed() == 1) {
			status = PED_STATE;
			SetTimer2(3000);
		}
		break;

	case AUTO_YELLOW1_RED2:
		YELLOW_1();
		RED_2();
		RED_3();

		if (timer1_flag == 1) {
			status = AUTO_RED1_GREEN2;
			SetTimer1(3000);
		}
		if (Button1_Is_Pressed() == 1) {
			status = MAN_INIT;
		}
		if (Button4_Is_Pressed() == 1) {
			status = PED_STATE;
			SetTimer3(2000);
		}
		break;
	}
}
