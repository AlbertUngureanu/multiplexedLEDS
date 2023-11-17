/*
 * FirstProject.c
 *
 * Created: 11/10/2023 11:47:31 PM
 * Author : Albert
 */ 

#include "patterns.h"
#include "obstacleSensor.h"

void (*Pattern[])() = {&pulseFromLeftToRight, &pulseFromRightToLeft, &LoadFromLeftToRight, &LoadFromRightToLeft, &spreadToMiddle, &spreadFromMiddle, &pulseUpsideDown, &pulseDownsideUp};

int main(void)
{
	enableInterrupt();
    /* Replace with your application code */
    while (1) 
    {
		if(state > 7) {
			state = 0;
		}
		
		Pattern[state]();
    }
}