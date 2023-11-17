/*
 * leds.c
 *
 * Created: 11/14/2023 10:52:53 PM
 *  Author: Albert
 */ 
#include "leds.h"

void blinkLed1() {
	DDRD &= 0;
	PORTD &= 0;
	DDRD |= 1 << WHITE;
	DDRD |= 1 << ORANGE;
	
	PORTD |= 1 << WHITE;
	_delay_ms(DELAY);
	PORTD ^= 1 << WHITE;
}

void blinkLed2() {
	DDRD &= 0;
	PORTD &= 0;
	DDRD |= 1 << WHITE;
	DDRD |= 1 << ORANGE;
	
	PORTD |= 1 << ORANGE;
	_delay_ms(DELAY);
	PORTD ^= 1 << ORANGE;
}

void blinkLed3() {
	DDRD &= 0;
	PORTD &= 0;
	DDRD |= 1 << GREEN;
	DDRD |= 1 << ORANGE;
	
	PORTD |= 1 << ORANGE;
	_delay_ms(DELAY);
	PORTD ^= 1 << ORANGE;
}

void blinkLed4() {
	DDRD &= 0;
	PORTD &= 0;
	DDRD |= 1 << GREEN;
	DDRD |= 1 << ORANGE;
	
	PORTD |= 1 << GREEN;
	_delay_ms(DELAY);
	PORTD ^= 1 << GREEN;
}
void blinkLed5(){
	DDRD &= 0;
	PORTD &= 0;
	DDRD |= 1 << WHITE;
	DDRD |= 1 << GREEN;
	
	PORTD |= 1 << WHITE;
	_delay_ms(DELAY);
	PORTD ^= 1 << WHITE;
}
void blinkLed6(){
	DDRD &= 0;
	PORTD &= 0;
	DDRD |= 1 << WHITE;
	DDRD |= 1 << GREEN;
	
	PORTD |= 1 << GREEN;
	_delay_ms(DELAY);
	PORTD ^= 1 << GREEN;
}
void blinkLed7(){
	DDRD &= 0;
	PORTD &= 0;
	DDRD |= 1 << GREEN;
	DDRD |= 1 << RED;
	
	PORTD |= 1 << GREEN;
	_delay_ms(DELAY);
	PORTD ^= 1 << GREEN;
}
void blinkLed8(){
	DDRD &= 0;
	PORTD &= 0;
	DDRD |= 1 << GREEN;
	DDRD |= 1 << RED;
	
	PORTD |= 1 << RED;
	_delay_ms(DELAY);
	PORTD ^= 1 << RED;
}
void blinkLed9(){
	DDRD &= 0;
	PORTD &= 0;
	DDRD |= 1 << ORANGE;
	DDRD |= 1 << RED;
	
	PORTD |= 1 << RED;
	_delay_ms(DELAY);
	PORTD ^= 1 << RED;
}
void blinkLed10(){
	DDRD &= 0;
	PORTD &= 0;
	DDRD |= 1 << RED;
	DDRD |= 1 << ORANGE;
	
	PORTD |= 1 << ORANGE;
	_delay_ms(DELAY);
	PORTD ^= 1 << ORANGE;
}
void blinkLed11(){
	DDRD &= 0;
	PORTD &= 0;
	DDRD |= 1 << WHITE;
	DDRD |= 1 << RED;
	
	PORTD |= 1 << RED;
	_delay_ms(DELAY);
	PORTD ^= 1 << RED;
}
void blinkLed12(){
	DDRD &= 0;
	PORTD &= 0;
	DDRD |= 1 << WHITE;
	DDRD |= 1 << RED;
	
	PORTD |= 1 << WHITE;
	_delay_ms(DELAY);
	PORTD ^= 1 << WHITE;
}
void blinkLed13(){
	DDRD &= 0;
	PORTD &= 0;
	DDRD |= 1 << RED;
	DDRD |= 1 << BLUE;
	
	PORTD |= 1 << BLUE;
	_delay_ms(DELAY);
	PORTD ^= 1 << BLUE;
}
void blinkLed14(){
	DDRD &= 0;
	PORTD &= 0;
	DDRD |= 1 << RED;
	DDRD |= 1 << BLUE;
	
	PORTD |= 1 << RED;
	_delay_ms(DELAY);
	PORTD ^= 1 << RED;
}
void blinkLed15(){
	DDRD &= 0;
	PORTD &= 0;
	DDRD |= 1 << BLUE;
	DDRD |= 1 << GREEN;
	
	PORTD |= 1 << BLUE;
	_delay_ms(DELAY);
	PORTD ^= 1 << BLUE;
}
void blinkLed16(){
	DDRD &= 0;
	PORTD &= 0;
	DDRD |= 1 << BLUE;
	DDRD |= 1 << GREEN;
	
	PORTD |= 1 << GREEN;
	_delay_ms(DELAY);
	PORTD ^= 1 << GREEN;
}
void blinkLed17(){
	DDRD &= 0;
	PORTD &= 0;
	DDRD |= 1 << BLUE;
	DDRD |= 1 << ORANGE;
	
	PORTD |= 1 << BLUE;
	_delay_ms(DELAY);
	PORTD ^= 1 << ORANGE;
}
void blinkLed18(){
	DDRD &= 0;
	PORTD &= 0;
	DDRD |= 1 << BLUE;
	DDRD |= 1 << ORANGE;
	
	PORTD |= 1 << ORANGE;
	_delay_ms(DELAY);
	PORTD ^= 1 << ORANGE;
}
void blinkLed19(){
	DDRD &= 0;
	PORTD &= 0;
	DDRD |= 1 << WHITE;
	DDRD |= 1 << BLUE;
	
	PORTD |= 1 << WHITE;
	_delay_ms(DELAY);
	PORTD ^= 1 << WHITE;
}
void blinkLed20(){
	DDRD &= 0;
	PORTD &= 0;
	DDRD |= 1 << WHITE;
	DDRD |= 1 << BLUE;
	
	PORTD |= 1 << BLUE;
	_delay_ms(DELAY);
	PORTD ^= 1 << BLUE;
}