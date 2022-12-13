/*
 * global.h
 *
 *  Created on: Nov 30, 2022
 *      Author: 84336
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "button.h"
#include "main.h"
#include "traffic1.h"
#include "traffic2.h"
#include "pdtlight1.h"
#include "buzzer.h"

#define INIT				1

#define AUTO_RED1_GREEN2 		2
#define AUTO_RED1_YELLOW2		3
#define AUTO_GREEN1_RED2		4
#define	AUTO_YELLOW1_RED2		5

#define MAN_RED1_GREEN2 		12
#define MAN_RED1_YELLOW2		13
#define MAN_GREEN1_RED2			14
#define	MAN_YELLOW1_RED2		15

#define TUN_RED1_GREEN2		22
#define TUN_RED1_YELLOW2	23
#define TUN_GREEN1_RED2		24
#define TUN_YELLOW1_RED2	25

#define PED_RED1_RED2		32

extern int status;

#endif /* INC_GLOBAL_H_ */
