/*
 * bit_math.h
 *
 * Created: 11/21/2020 6:38:58 PM
 *  Author: 20111
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_


#define SET_BIT(reg,pin)    (reg) |= (1 <<(pin))
#define CLEAR_BIT(reg,pin)  reg&=~(1<<pin)	
#define READ_BIT(reg,pin)   (reg&(1<<pin))>>pin
#define TOGGLE_BIT(reg,pin)  reg^=(1<<pin)

#endif /* BIT_MATH_H_ */