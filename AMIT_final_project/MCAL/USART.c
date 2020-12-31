/*
 * USART.c
 *
 * Created: 12/4/2020 8:56:44 PM
 *  Author: 20111
 */ 
#include "usart_reg.h"
#include "bit_math.h"
#include "reg_def1.h"
#include "std_files.h"


void uart_init(){
	//enable global interrupt 
	//SET_BIT(SREG,7);
	//ebable rx complete interrupt flag
	//SET_BIT(UCSRB,7);
// rx enable
SET_BIT(UCSRB,4);	
//	rx enable
SET_BIT(UCSRB,3);
//async mode
CLEAR_BIT(UCSRC,6);
//parity mode
CLEAR_BIT(UCSRC,4);
CLEAR_BIT(UCSRC,5);
// chractar size 8bit
SET_BIT(UCSRC,1);
SET_BIT(UCSRC,2);
//1 bit stop
CLEAR_BIT(UCSRC,3);
UBRRL=103;
}


void uart_sentByte(uint_8 byte){

while(READ_BIT(UCSRA,5)==0);
UDR=byte;
}


uint_8 uart_recieveByte(){
	
	while(READ_BIT(UCSRA,7)==0);
	return UDR;
}
