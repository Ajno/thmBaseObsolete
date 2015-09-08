/*
 * timer.h
 *
 *  Created on: Aug 24, 2015
 *      Author: z0037ysj
 */

#ifndef TIMER_H_
#define TIMER_H_

#include <stdtypes.h>

void timerInit();
void wait500ns();
void waitX100us(const Word cDelay);

#endif /* TIMER_H_ */
