/*
 * SetResetWithShiftLeft.c
 *
 * Created: 04-12-2019 14:38:29
 * Author : robe1819
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRD = 0b11111111;
	
    while (1) 
    {	
		PORTD = 0x00;
		_delay_ms(1000);
		
		PORTD |= (1<<0);
		_delay_ms(1000);
		
		PORTD |= (1<<1);
		_delay_ms(1000);
		
		PORTD |= (1<<2);
		_delay_ms(1000);
		
		PORTD |= (1<<3) | (1<<4) | (1<<5);
		_delay_ms(1000);
		
		PORTD &= ~(1 << 0);
		_delay_ms(1000);
		
		PORTD &= ~(1 << 0);
		_delay_ms(1000);
		
		PORTD &= ~(1 << 3 | 1<<4 | 1<<5);
		_delay_ms(1000);
    }
}

