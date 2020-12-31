/*
 * ext_interrupt.h
 *
 * Created: 11/11/2020 11:33:51 PM
 *  Author: 20111
 */ 


#ifndef EXT_INTERRUPT_H_
#define EXT_INTERRUPT_H_

#include "ext_interrupt_cfg.h"

#define GLOBAL_INTERRUPT_ENABLE			 1
#define GLOBAL_INTERRUPT_DISABLE		 0

#define EXT_INTERRUPT_FALLING_EDGE		 0
#define EXT_INTERRUPT_RAISING_EDGE		 1
#define EXT_INTERRUPT_LOW_LEVEL			 2
#define EXT_INTERRUPT_ANY_LOGICAL_CHANGE 3

void set_global_interrupt(void);
void ext_int0_init(void);

#endif /* EXT_INTERRUPT_H_ */