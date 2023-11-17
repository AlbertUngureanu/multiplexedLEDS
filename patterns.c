/*
 * patterns.c
 *
 * Created: 11/14/2023 10:16:46 PM
 *  Author: Albert
 */ 
#include "patterns.h"

void (*BlinkLed[20])() = {&blinkLed1, &blinkLed2, &blinkLed3, &blinkLed4, &blinkLed5, &blinkLed6, &blinkLed7, &blinkLed8, &blinkLed9, &blinkLed10, &blinkLed11, &blinkLed12, &blinkLed13, &blinkLed14, &blinkLed15, &blinkLed16, &blinkLed17, &blinkLed18, &blinkLed19, &blinkLed20};

void pulseFromLeftToRight() {
	unsigned short i, j;
	for(i = 0; i < 19; i+=2) {
		for(j = 0; j < TIME; j++) {
			BlinkLed[i]();
			BlinkLed[i + 1]();
		}
	}
}

void LoadFromLeftToRight() {
	unsigned short i, j;
	for(i = 0; i < 19; i+=2) {
		for(j = 0; j <= i; j++){
			BlinkLed[j]();
			BlinkLed[j + 1]();
		}
	}
	
	_delay_ms(TIME3);
}

void LoadFromRightToLeft() {
	short i, j;
	for(i = 18; i >= 0; i-=2) {
		for(j = i; j < 19; j++){
			BlinkLed[j]();
			BlinkLed[j + 1]();
		}
		_delay_ms(10);
	}
	
	_delay_ms(TIME3);
}

void pulseFromRightToLeft() {
	short i, j;
	for(i = 18; i >= 0; i-=2) {
		for(j = 0; j < TIME; j++) {
			BlinkLed[i]();
			BlinkLed[i + 1]();
		}
	}
}

void pulseUpsideDown() {
	unsigned short i, j;
	for(j = 0; j < TIME2; j++) {
		for(i = 0; i < 20; i+=2) {
			BlinkLed[i]();
		}
	}
	
	for(j = 0; j < TIME2; j++) {
		for(i = 1; i < 20; i+=2) {
			BlinkLed[i]();
		}
	}
}

void pulseDownsideUp() {
	unsigned short i, j;
	for(j = 0; j < TIME2; j++) {
		for(i = 1; i < 20; i+=2) {
			BlinkLed[i]();
		}
	}
		
	for(j = 0; j < TIME2; j++) {
		for(i = 0; i < 20; i+=2) {
			BlinkLed[i]();
		}
	}
}


void spreadFromMiddle() {
	unsigned short i, j;
	
	for(i = 0; i <= 8; i += 2) {
		for(j = 8 - i; j <= 11 + i; j++) {
			BlinkLed[j]();
		}
		_delay_ms(TIME);
	}
	
	_delay_ms(TIME3);
}

void spreadToMiddle() {
	unsigned short i, j;
	
	for(i = 2; i <= 10; i += 2) {
		for(j = 0; j < i; j++) {
			BlinkLed[j]();
			BlinkLed[19 - j]();
		}
		_delay_ms(TIME);
	}
	
	_delay_ms(TIME3);
}