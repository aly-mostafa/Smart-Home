/*
 * spi_reg.h
 *
 * Created: 12/5/2020 7:17:19 PM
 *  Author: 20111
 */ 


#ifndef SPI_REG_H_
#define SPI_REG_H_

#define SPCR	  (*((volatile uint_8 *)(0x2D)))

#define SPSR	  (*((volatile uint_8 *)(0x2E)))

#define SPDR	  (*((volatile uint_8 *)(0x2F)))


#endif /* SPI_REG_H_ */