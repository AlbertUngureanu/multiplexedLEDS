/*
 * obstacleSensor.c
 *
 * Created: 11/15/2023 8:24:39 PM
 *  Author: Albert
 */ 

#include "obstacleSensor.h"

volatile char state = 0;

void enableInterrupt() {
	// enable global interrupts;
	SREG |= (1 << 7);
	
	// set pin as input, no pull-up resistance;
	DDRD &= ~(1 << DDRD7);
	PORTD &= ~(1 << DDRD7);

	// enable interrupt on PCINT0;
	PCICR |= (1 << PCIE2);
	PCMSK2 |= (1<<PCINT23);
}

ISR(PCINT2_vect) {
	if(!(PIND & (1 << PIND7))) // verify if the value on PIND7 is LOW (object detected)
		state += 1;
}