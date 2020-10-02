#include "main.h"

/*Функція ініціалізації контролера*/
void init_cpu()
{
	DDRB=0x00;
	DDRC=0xFF;
	DDRD=0xFF;

	PORTB=0x01;
	PORTC=0x00;
	PORTD=0xFF;
}

/* Replace with your library code */
int main(void){
	init_cpu();
	uart_init(8);

	_delay_ms(100);
	return 0;
}
