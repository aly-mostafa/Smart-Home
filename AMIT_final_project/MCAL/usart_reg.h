/*
 * usart_reg.h
 *
 * Created: 12/4/2020 8:46:20 PM
 *  Author: 20111
 */ 


#ifndef USART_REG_H_
#define USART_REG_H_

#define UDR	  (*((volatile uint_8 *)(0x2C)))

#define UCSRA	  (*((volatile uint_8 *)(0x2B)))

#define UCSRB	  (*((volatile uint_8 *)(0x2A)))

#define UCSRC	  (*((volatile uint_8 *)(0x40)))
#define UBRRL	  (*((volatile uint_8 *)(0x29)))

#endif /* USART_REG_H_ */