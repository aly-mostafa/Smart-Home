/*
 * reg_def1.h
 *
 * Created: 10/30/2020 9:35:37 PM
 *  Author: 20111
 */ 


#ifndef REG_DEF1_H_
#define REG_DEF1_H_

#define DDRA	  (*((volatile uint_8 *)(0x3A)))
#define PORTA     (*((volatile uint_8 *)(0x3B)))
#define PINA      (*((volatile uint_8 *)(0x39)))


#define DDRB	  (*((volatile uint_8 *)(0x37)))
#define PORTB     (*((volatile uint_8 *)(0x38)))
#define PINB      (*((volatile uint_8 *)(0x36)))

#define DDRC	  (*((volatile uint_8 *)(0x34)))
#define PORTC     (*((volatile uint_8 *)(0x35)))
#define PINC      (*((volatile uint_8 *)(0x33)))


#define DDRD      (*((volatile uint_8 *)(0x31)))
#define PORTD     (*((volatile uint_8 *)(0x32)))
#define PIND      (*((volatile uint_8 *)(0x30)))


/********************EXTERNAL INTERRUPT REGISTER**********************/


#define SREG      (*((volatile uint_8 *)(0x5F)))
#define GICR     (*((volatile uint_8 *)(0x5B)))
#define GIFR     (*((volatile uint_8 *)(0x5A)))
#define MCUCR     (*((volatile uint_8 *)(0x55)))
#define MCUCSR     (*((volatile uint_8 *)(0x54)))



#endif /* REG_DEF1_H_ */