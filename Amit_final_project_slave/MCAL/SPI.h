/*
 * SPI.h
 *
 * Created: 12/5/2020 7:23:00 PM
 *  Author: 20111
 */ 


#ifndef SPI_H_
#define SPI_H_
#include "std_files.h"
void spi_initMaster();
void spi_initSlave();
void spi_sendByte(uint_8 data);
uint_8 spi_reciveByte();



#endif /* SPI_H_ */