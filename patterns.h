/*
 * patterns.h
 *
 * Created: 11/14/2023 10:16:06 PM
 *  Author: Albert
 */ 
#define TIME 25
#define TIME2 15
#define TIME3 150

#ifndef PATTERNS_H_
#define PATTERNS_H_

#include "leds.h"

void pulseFromLeftToRight();
void pulseFromRightToLeft();
void LoadFromLeftToRight();
void LoadFromRightToLeft();
void pulseUpsideDown();
void pulseDownsideUp();
void spreadFromMiddle();
void spreadToMiddle();

#endif /* PATTERNS_H_ */