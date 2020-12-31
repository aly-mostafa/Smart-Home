/*
 * USART.h
 *
 * Created: 12/4/2020 8:50:52 PM
 *  Author: 20111
 */ 


#ifndef USART_H_
#define USART_H_

#include "std_files.h"

void uart_init();

void uart_sentByte(uint_8 byte);

uint_8 uart_recieveByte();

#endif /* USART_H_ */