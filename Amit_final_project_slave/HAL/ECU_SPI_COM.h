/*
 * ECU_SPI_COM.h
 *
 * Created: 12/27/2020 4:16:18 PM
 *  Author: 20111
 */ 


#ifndef ECU_SPI_COM_H_
#define ECU_SPI_COM_H_

#include "std_files.h"


void	ECU_master_init();
void	ECU_slave_init();
void	ECU_send_data(uint_8 data);
uint_8	ECU_recive_data();


#endif /* ECU_SPI_COM_H_ */