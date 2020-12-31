/*
 * DIO.c
 *
 * Created: 10/24/2020 11:13:51 AM
 *  Author: 20111
 */ 
#include "std_files.h"
#include <avr/io.h>
void DIO_vSetPinDir(uint_8 port_name ,uint_8 pin_num,uint_8 dir){
	
	switch (port_name){
		case 'A':
		case 'a':
		if(1==dir){
			DDRA |= (1<<pin_num);
		}
		else{
			DDRA &=~(1<<pin_num);
		}
		break;
		
		case 'B':
		case 'b':
		if(1==dir){
			DDRB |= (1<<pin_num);
		}
		else{
			DDRB &=~(1<<pin_num);
		}
		break;
		case 'C':
		case 'c':
		if(1==dir){
			DDRC |= (1<<pin_num);
		}
		else{
			DDRC &=~(1<<pin_num);
		}
		break;
		
		case 'D':
		case 'd':
		if(1==dir){
			DDRD |= (1<<pin_num);
		}
		else{
			DDRD &=~(1<<pin_num);
		}
		break;
		
		default:
		break;
		
		
	}
	

}

void DIO_vWiteDigitalOutput(uint_8 port_name ,uint_8 pin_num, uint_8 output_val){
	
	switch (port_name){
		case 'A':
		case 'a':
			if(1==output_val){
				PORTA |= (1<<pin_num);
			}
			else{
				PORTA &=~(1<<pin_num);
			}
			break;
			
		case 'B':
		case 'b':
			if(1==output_val){
				PORTB |= (1<<pin_num);
			}
			else{
				PORTB &=~(1<<pin_num);
				}
			break;
		case 'C':
		case 'c':
		if(1==output_val){
			PORTC |= (1<<pin_num);
		}
		else{
			PORTC &=~(1<<pin_num);
		}
		break;
		
		case 'D':
		case 'd':
		if(1==output_val){
			PORTD |= (1<<pin_num);
		}
		else{
			PORTD &=~(1<<pin_num);
		}
		break;
		default:
		break;
		
		
	}
	

}
uint_8 DIO_ui8_ReadDigitalInput(uint_8 port_name ,uint_8 pin_num){
	 uint_8 input_val =0;
	switch (port_name){
		case 'A':
		case 'a':
			input_val= (PINA & (1<<pin_num))>>pin_num;
			
		break;
		
		case 'B':
		case 'b':
			input_val= (PINB & (1<<pin_num))>>pin_num;
		break;
		case 'C':
		case 'c':

		break;
			input_val= (PINC & (1<<pin_num))>>pin_num;
		case 'D':
		case 'd':
			input_val= (PIND & (1<<pin_num))>>pin_num;
		break;
		default:
		break;		
	}
	
		return input_val;
}


void DIO_vSetPortDir(uint_8 port_name,uint_8 dir)
{
		switch (port_name){
			case 'A':
			case 'a':
			if(1==dir){
				DDRA |=0xFF;
			}
			else{
				DDRA &= ~0xFF;
			}
			break;
			
			case 'B':
			case 'b':
			if(1==dir){
				DDRB |= 0xFF;
			}
			else{
				DDRB &=~0xFF;
			}
			break;
			case 'C':
			case 'c':
			if(1==dir){
				DDRC |= 0xFF;
			}
			else{
				DDRC &=~0xFF;
			}
			break;
			
			case 'D':
			case 'd':
			if(1==dir){
				DDRD |= 0xFF;
			}
			else{
				DDRD &=~0xFF;
			}
			break;
			
			default:
			break;
			
			
		}
	
}


void DIO_vWritePortAsDigitalOutput(uint_8 port_name,uint_8 output_val)
{
		switch (port_name){
			case 'A':
			case 'a':
			
				PORTA =output_val;
			
			break;
			
			case 'B':
			case 'b':
			PORTB =output_val;
			break;
			case 'C':
			case 'c':
			
			PORTC =output_val;
			
			break;
			
			case 'D':
			case 'd':
			PORTD =output_val;
			break;
			
			default:
			break;
}
}