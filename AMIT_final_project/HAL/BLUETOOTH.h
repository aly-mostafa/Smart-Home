/*
 * BLUETOOTH.h
 *
 * Created: 12/27/2020 4:12:39 PM
 *  Author: 20111
 */ 


#ifndef BLUETOOTH_H_
#define BLUETOOTH_H_

#include "std_files.h"

void  BlueTooth_init();
void  BlueTooth_send(uint_8 data);
uint_8  BlueTooth_recive();



#endif /* BLUETOOTH_H_ */