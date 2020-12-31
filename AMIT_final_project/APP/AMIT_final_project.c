/*
 * AMIT_final_project.c
 *
 * Created: 12/14/2020 1:31:02 PM
 *  Author: aly mostafa
 */ 



#include "BLUETOOTH.h"
#include "ECU_SPI_COM.h"

int main(void)
{
	
	ECU_master_init();
	BlueTooth_init();
	
	
	uint_8 data =0;
	
	
	
    while(1)
    {	
		
		data=BlueTooth_recive();
		ECU_send_data(data);
	
	 
    }
}

