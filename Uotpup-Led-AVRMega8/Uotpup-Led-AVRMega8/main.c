#define  F_CPU 8000000
#include <avr/io.h>

void Init()
{
	DDRD=0xFF;
	PORTD=0b10000000;
	PORTD=0b01000000;
	PORTD=0b00100000;
	PORTD=0b00010000;
	PORTD=0b00001000;
	PORTD=0b00000100;
	PORTD=0b00000010;
	PORTD=0b00000001;
}

int main(void)
{
	Init();
	while (1)
	{
	}
}