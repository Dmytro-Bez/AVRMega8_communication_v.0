#include "main.h"

/*Init CPU_Mega8A*/
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
	uart_init(8);					//115200
	uart_transmit('O');
	uart_transmit(0x0d);
	uart_transmit(0x0a);
	_delay_ms(500);
	init_timer();
	sei();

	while(1);
	return 0;
}
