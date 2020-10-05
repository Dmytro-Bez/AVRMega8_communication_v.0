#include "timer.h"

unsigned char i;

void init_timer(){
	TCCR1B |= (1<<WGM12);
	TIMSK |= (1<<OCIE1A);
	OCR1AH = 0b01111010;
	OCR1AL = 0b00010010;
	TCCR1B |= (1<<CS12);
}

ISR (TIMER1_COMPA_vect){
	 if(i>9) i=0;
	 //segchar(i);
	 i++;
}