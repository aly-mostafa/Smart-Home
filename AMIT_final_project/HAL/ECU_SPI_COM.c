/*
 * ECU_SPI_COM.c
 *
 * Created: 12/27/2020 4:15:49 PM
 *  Author: 20111
 */ 

#include "SPI.h"

void	ECU_master_init()
{
	spi_initMaster();
	
}
void	ECU_slave_init()
{
	spi_initSlave();
}
void	ECU_send_data(uint_8 data)
{
	spi_sendByte(data);
}
uint_8	ECU_recive_data()
{
	return spi_reciveByte();
	
}