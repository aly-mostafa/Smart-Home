/*
 * SPI.c
 *
 * Created: 12/5/2020 7:23:16 PM
 *  Author: 20111
 */ 

#include "reg_def1.h"
#include "std_files.h"
#include "bit_math.h"
#include "DIO.h"
#include "spi_reg.h"

void spi_initMaster(){
	
	//ss pin output
	DIO_vSetPinDir(GROUP_B,PIN_4,OUTPUT);
	//DIO_vWiteDigitalOutput(GROUP_B,PIN_4,HIGH);
	//mosi pin output
	DIO_vSetPinDir(GROUP_B,PIN_5,OUTPUT);
	//DIO_vWiteDigitalOutput(GROUP_B,PIN_5,HIGH);
	// miso pin input
	DIO_vSetPinDir(GROUP_B,PIN_6,INPUT);
	//DIO_vWiteDigitalOutput(GROUP_B,PIN_6,LOW);
	//sck pin output
	DIO_vSetPinDir(GROUP_B,PIN_7,OUTPUT);
	//DIO_vWiteDigitalOutput(GROUP_B,PIN_7,HIGH);
	
	
	//master enable
	SET_BIT(SPCR,PIN_4);
	//enable spi
	SET_BIT(SPCR,PIN_6);
	
	//set clock rate to f/4
	//CLEAR_BIT(SPCR,PIN_0);
	//CLEAR_BIT(SPCR,PIN_1);
	//CLEAR_BIT(SPSR,PIN_0);
	
	
}

void spi_initSlave(){
	
		//ss pin input
		DIO_vSetPinDir(GROUP_B,PIN_4,INPUT);
		//DIO_vWiteDigitalOutput(GROUP_B,PIN_4,LOW);
		//mosi pin input
		DIO_vSetPinDir(GROUP_B,PIN_5,INPUT);
		//DIO_vWiteDigitalOutput(GROUP_B,PIN_5,LOW);
		// miso pin output
		DIO_vSetPinDir(GROUP_B,PIN_6,OUTPUT);
		//DIO_vWiteDigitalOutput(GROUP_B,PIN_6,HIGH);
		//sck pin input
		DIO_vSetPinDir(GROUP_B,PIN_7,INPUT);
		//DIO_vWiteDigitalOutput(GROUP_B,PIN_7,LOW);
		

		//slave enable
		//CLEAR_BIT(SPCR,PIN_4);
		
		//enable spi
		SET_BIT(SPCR,PIN_6);
		//set clock rate to f/4
		//CLEAR_BIT(SPCR,PIN_0);
		//CLEAR_BIT(SPCR,PIN_1);
		//CLEAR_BIT(SPSR,PIN_0);
	
}


void spi_sendByte(uint_8 data){
	
	SPDR=data;
	while(READ_BIT(SPSR,PIN_7)==0);
	
}


uint_8 spi_reciveByte(){

	while(READ_BIT(SPSR,PIN_7)==0);
	return SPDR;
}