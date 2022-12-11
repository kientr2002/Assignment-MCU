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
		status = RED1_GREEN2;
		SetTimer1(3000);
		break;

	case RED1_GREEN2:
		RED_1();
		GREEN_2();
		GREEN_3();

		if (timer1_flag == 1) {
			status = RED1_YELLOW2;
			SetTimer1(2000);
		}
		if (Button1_Is_Pressed() == 1) {
			status = MAN_GREEN1_RED2;
			SetTimer1(3000);
		}
		if (Button3_Is_Pressed() == 1) {
			status = RED1_GREEN2;
		}
		break;

	case RED1_YELLOW2:
		RED_1();
		YELLOW_2();
		GREEN_3();

		if (timer1_flag == 1) {
			status = GREEN1_RED2;
			SetTimer1(3000);
		}
		if (Button1_Is_Pressed() == 1) {
			status = MAN_GREEN1_RED2;
			SetTimer1(3000);
		}
		if (Button3_Is_Pressed() == 1) {
			status = RED1_YELLOW2;
		}
		break;

	case GREEN1_RED2:
		GREEN_1();
		RED_2();
		RED_3();

		if (timer1_flag == 1) {
			status = YELLOW1_RED2;
			SetTimer1(2000);
		}
		if (Button1_Is_Pressed() == 1) {
			status = RED1_GREEN2;
			SetTimer1(2000);
		}
		if (Button3_Is_Pressed() == 1) {
			status = GREEN1_RED2;
		}
		break;

	case YELLOW1_RED2:
		YELLOW_1();
		RED_2();
		RED_3();

		if (timer1_flag == 1) {
			status = RED1_GREEN2;
			SetTimer1(3000);
		}
		if (Button1_Is_Pressed() == 1) {
			status = MAN_RED1_GREEN2;
		}
		if (Button3_Is_Pressed() == 1) {
			status = YELLOW1_RED2;
		}
		break;
	}
}
