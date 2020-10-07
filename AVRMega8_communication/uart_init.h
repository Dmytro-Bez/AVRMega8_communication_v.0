#ifndef UART_INIT_H_
#define UART_INIT_H_

#include "main.h"

void uart_init( unsigned int speed);
void uart_transmit( unsigned char data );

#endif /* UART_INIT_H_ */