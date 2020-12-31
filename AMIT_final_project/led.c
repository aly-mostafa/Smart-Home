/*
 * led.c
 *
 * Created: 10/24/2020 12:23:17 PM
 *  Author: 20111
 */ 
#include <avr/io.h>
#include "DIO.h"
#include "std_files.h"

void led_vInit(uint_8 port_name ,uint_8 pin_num)
{
	DIO_vSetPinDir(port_name,pin_num,1);
}
void led_vOn(uint_8 port_name ,uint_8 pin_num)
{
	DIO_vWiteDigitalOutput(port_name,pin_num,1);
}
void led_vOff(uint_8 port_name ,uint_8 pin_num)
{
	DIO_vWiteDigitalOutput(port_name,pin_num,0);	
}
void led_vToggle(uint_8 port_name ,uint_8 pin_num)
{
	static uint_8 pin_val=0;
	pin_val = pin_val^1;
	DIO_vWiteDigitalOutput(port_name,pin_num,pin_val);
		
}
void bushbutton_vInit(uint_8 port_name ,uint_8 pin_num)
{
	DIO_vSetPinDir(port_name,pin_num,0);
	
}
uint_8 bushbutton_ui8Read(uint_8 port_name ,uint_8 pin_num){
	
	return DIO_ui8_ReadDigitalInput(port_name,pin_num);
}