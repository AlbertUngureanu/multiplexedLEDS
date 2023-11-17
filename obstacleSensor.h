/*
 * obstacleSensor.h
 *
 * Created: 11/15/2023 8:24:30 PM
 *  Author: Albert
 */ 

#define F_CPU 16000000UL

#ifndef OBSTACLESENSOR_H_
#define OBSTACLESENSOR_H_

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

extern volatile char state;

void enableInterrupt();

#endif /* OBSTACLESENSOR_H_ */