/*
 * DIO.h
 *
 * Created: 10/24/2020 11:15:13 AM
 *  Author: 20111
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "std_files.h"

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


#define HIGH     1
#define  LOW	 0


#define OUTPUT   1
#define INPUT    0	


void DIO_vSetPinDir(uint_8 port_name ,uint_8 pin_num,uint_8 dir);
void DIO_vWiteDigitalOutput(uint_8 port_name ,uint_8 pin_num, uint_8 output_val);
uint_8 DIO_ui8_ReadDigitalInput(uint_8 port_name ,uint_8 pin_num);
void DIO_vSetPortDir(uint_8 port_name,uint_8 dir);
void DIO_vWritePortAsDigitalOutput(uint_8 port_name,uint_8 output_val);



#endif /* DIO_H_ */