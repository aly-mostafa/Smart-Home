/*
 * BLUETOOTH.c
 *
 * Created: 12/27/2020 4:13:00 PM
 *  Author: 20111
 */ 

#include "USART.h"


void  BlueTooth_init(){
	
	uart_init();
}
void  BlueTooth_send(uint_8 data){
	
	uart_sentByte(data);
}
uint_8  BlueTooth_recive(){
	
	return uart_recieveByte();
}