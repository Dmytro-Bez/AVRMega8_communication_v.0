/*
 * uart.c
 *
 * Created: 02.10.2020 16:32:47
 *  Author: dzimi
 */ 

#include "uart_init.h"

void uart_init( unsigned int speed){
	UBRRH = (unsigned char)(speed>>8);
	UBRRL = (unsigned char)speed;
	UCSRB=(1<<RXEN)|( 1<<TXEN); 
	UCSRB |= (1<<RXCIE); 
	UCSRA |= (1<<U2X); 
	UCSRC = (1<<URSEL)|(1<<USBS)|(1<<UCSZ1)|(1<<UCSZ0);
 }

void uart_transmit( unsigned char data ){
	while ( !(UCSRA & (1<<UDRE)) );
	UDR = data;
 }



