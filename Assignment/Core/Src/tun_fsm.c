/*
 * tun_fsm.c
 *
 *  Created on: Dec 6, 2022
 *      Author: ADMIN
 */
#include "tun_fsm.h"

void tun_fsm_run(){
	switch(status) {

	case TUN_RED1_GREEN2:
		RED_1();
		GREEN_2();
		GREEN_3();
		buzzer_ring();

		if (timer1_flag == 1 || Button3_Is_Pressed() == 1) {
			status = TUN_RED1_GREEN2;
			SetTimer1(10000);
		}
		if (Button1_Is_Pressed() == 1) {
			status = AUTO_RED1_GREEN2;
			SetTimer1(3000);
		}
		if (Button2_Is_Pressed() == 1) {
			status = TUN_RED1_YELLOW2;
			SetTimer1(10000);
		}
		break;

	case TUN_RED1_YELLOW2:
		RED_1();
		YELLOW_2();
		GREEN_3();
		buzzer_ring();

		if (timer1_flag == 1 || Button3_Is_Pressed() == 1) {
			status = TUN_RED1_YELLOW2;
			SetTimer1(10000);
		}
		if (Button1_Is_Pressed() == 1) {
			status = AUTO_RED1_GREEN2;
			SetTimer1(3000);
		}
		if (Button2_Is_Pressed() == 1) {
			status = TUN_GREEN1_RED2;
		}
		break;

	case TUN_GREEN1_RED2:
		GREEN_1();
		YELLOW_2();
		RED_3();
		buzzer_off();
		if (timer1_flag == 1 || Button3_Is_Pressed() == 1) {
			status = TUN_GREEN1_RED2;
			SetTimer1(10000);
		}
		if (Button1_Is_Pressed() == 1) {
			status = AUTO_RED1_GREEN2;
			SetTimer1(3000);
		}
		if (Button2_Is_Pressed() == 1) {
			status = TUN_YELLOW1_RED2;
			SetTimer1(10000);
		}
		if(Button4_Is_Pressed() == 1)
				{
					status = PED_RED1_RED2;
					SetTimer1(3000);
				}
		break;

	case TUN_YELLOW1_RED2:
		YELLOW_1();
		RED_2();
		RED_3();
		buzzer_off();
		if (timer1_flag == 1 || Button3_Is_Pressed() == 1) {
			status = TUN_YELLOW1_RED2;
			SetTimer1(10000);
		}
		if (Button1_Is_Pressed() == 1) {
			status = AUTO_RED1_GREEN2;
			SetTimer1(3000);
		}
		if (Button2_Is_Pressed() == 1) {
			status = TUN_RED1_GREEN2;
			SetTimer1(10000);
		}
		if(Button4_Is_Pressed() == 1)
				{
					status = PED_RED1_RED2;
					SetTimer1(3000);
				}
		break;
	}
}



