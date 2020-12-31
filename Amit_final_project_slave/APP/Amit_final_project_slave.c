/*
 * Amit_final_project_slave.c
 *
 * Created: 12/14/2020 6:33:58 PM
 *  Author: 20111
 */ 



#include "ECU_SPI_COM.h"
#include "led.h"

int main(void)
{
	ECU_slave_init();
	led_vInit(GROUP_C,PIN_3);
	led_vInit(GROUP_C,PIN_7);
	uint_8 data=0;
    while(1)
    {
		data=ECU_recive_data();
		
		if ('a'==data)
		{
			led_vOn(GROUP_C,PIN_3);
			data=0;
		}
		else if('b'==data)
		{
			led_vOn(GROUP_C,PIN_7);
			data=0;
			
		}
		else if ('c'==data)
		{
			led_vOff(GROUP_C,PIN_3);
			data=0;
		}
		else if ('d'==data)
		{
			led_vOff(GROUP_C,PIN_7);
			data=0;
		}
		
        
    }
}