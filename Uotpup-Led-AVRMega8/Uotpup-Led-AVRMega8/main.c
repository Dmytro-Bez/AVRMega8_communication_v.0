#define  F_CPU 8000000
#include <avr/io.h>

void Init()
{
	DDRD=0xFF;
	PORTD=0b00000001;
}

int main(void)
{
	Init();
	while (1)
	{
	}
}