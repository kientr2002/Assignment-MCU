/*
 * tun_fsm.c
 *
 *  Created on: Dec 6, 2022
 *      Author: ADMIN
 */
#include "tun_fsm.h"

void tun_fsm_run(){
	switch(status) {

	case TUN_RED:
		RED_1();
		GREEN_2();

		if (timer_red_flag == 1) {
			status = AUTO_GREEN;
			SetTimer1(3000);
		}
		if (Button1_Is_Pressed() == 1) {
			status = MAN_GREEN;
			SetTimer1(3000);
		}
		if (Button2_Is_Pressed() == 1) {
			status = TUN_RED;
			IncRed5s(5000);
		}
		break;

	case TUN_YELLOW:
		YELLOW_1();
		RED_2();

		if (timer_yellow_flag == 1) {
			status = AUTO_RED;
			SetTimer1(5000);
		}
		if (Button1_Is_Pressed() == 1) {
			status = MAN_RED;
			SetTimer1(5000);
		}
		if (Button2_Is_Pressed() == 1) {
			status = TUN_YELLOW;
			IncYellow2s(2000);
		}
		break;

	case TUN_GREEN:
		GREEN_1();
		YELLOW_2();

		if (timer_green_flag == 1) {
			status = AUTO_YELLOW;
			SetTimer1(2000);
		}
		if (Button1_Is_Pressed() == 1) {
			status = MAN_YELLOW;
			SetTimer1(2000);
		}
		if (Button2_Is_Pressed() == 1) {
			status = TUN_GREEN;
			IncGreen3s(3000);
		}
		break;

	default:
		break;
	}
}



