/*
 * virtualterminal.c
 *
 * Created: 6/13/2023 11:59:04 PM
 * Author : kamar
 */ 

#include <avr/io.h>
#include "LCD driver.h"
#include "USART.h"
#define F_CPU 8000000UL
#include <util/delay.h>

int main(void)
{
	UART_vInit (9600);
	LCD_vinit ();
	char data;
    
    while (1) 
    {
		data= UART_u8ResevigData ();
		LCD_vsend_char (data);
		
    }
}


