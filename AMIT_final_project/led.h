/*
 * led.h
 *
 * Created: 10/24/2020 12:22:59 PM
 *  Author: 20111
 */ 


#ifndef LED_H_
#define LED_H_

#define GROUP_A 'a'
#define GROUP_B 'b'
#define GROUP_C 'c'
#define GROUP_D 'd'
#define PIN_0    0
#define PIN_1    1
#define PIN_2    2
#define PIN_3    3
#define PIN_4    4
#define PIN_5    5
#define PIN_6    6
#define PIN_7    7

void led_vInit(uint_8 port_name ,uint_8 pin_num);
void led_vOn(uint_8 port_name ,uint_8 pin_num);
void led_vOff(uint_8 port_name ,uint_8 pin_num);
void led_vToggle(uint_8 port_name ,uint_8 pin_num);
void bushbutton_vInit(uint_8 port_name ,uint_8 pin_num);
uint_8 bushbutton_ui8Read(uint_8 port_name ,uint_8 pin_num);

#endif /* LED_H_ */