/*
 * ext_interrupt.c
 *
 * Created: 11/11/2020 11:33:33 PM
 *  Author: 20111
 */ 

#include <avr/interrupt.h>
#include "DIO.h"
#include "ext_interrupt_cfg.h"
#include "ext_interrupt.h"
#include "std_files.h"
#include "reg_def1.h"


void set_global_interrupt(void){
	
	#if GLOBAL_INTERRUPT_STATE == GLOBAL_INTERRUPT_ENABLE
	
	SREG|=(1<<7);
	
	
	#elif GLOBAL_INTERRUPT_STATE == GLOBAL_INTERRUPT_DISABLE
	SREG|=(0<<7);

#endif
}
void ext_int0_init(void){
	
	set_global_interrupt();
	//enable ext int0
	GICR|=(1<<6);
	
	#if EXT_INTERRUPT0_TRIGGER  ==  EXT_INTERRUPT_RAISING_EDGE
	MCUCR=0;
	MCUCR |= (3<<0);
	
	
	#elif   EXT_INTERRUPT0_TRIGGER  ==  EXT_INTERRUPT_FALLING_EDGE
	MCUCR=0;
	MCUCR |= (1<<1);
	
	#elif  EXT_INTERRUPT0_TRIGGER  ==  EXT_INTERRUPT_LOW_LEVEL
	MCUCR=0;
	MCUCR |= (0<<0);
	#elif  EXT_INTERRUPT0_TRIGGER  ==  EXT_INTERRUPT_ANY_LOGICAL_CHANGE
	MCUCR=0;
	MCUCR |= (1<<0);

#endif
}

ISR(INT0_vect){
	led_vToggle(GROUP_C,PIN_7);
}