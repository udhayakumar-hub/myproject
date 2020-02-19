#include <LPC21XX.H>
#include "header.h"
#define RS (1<<8) //P0.8
#define EN (1<<9) //P0.9
#define DATA_PINS (0xF<<14) //P0.14 - P0.17

void lcd_init()
{
	IODIR0|=DATA_PINS|RS|EN;
	lcd_cmd(0x2);
	lcd_cmd(0x28);//4bit
	lcd_cmd(0xE);
	lcd_cmd(0x1);
}

void lcd_cmd(u8 cmd)
{
	IOCLR0=DATA_PINS;
	IOSET0=((cmd&0xF0)>>4)<<14;
	IOCLR0=RS;
	IOSET0=EN;
	delay_ms(2);
	IOCLR0=EN;
	
	IOCLR0=DATA_PINS;
	IOSET0=(cmd&0xF)<<14;
	IOCLR0=RS;
	IOSET0=EN;
	delay_ms(2);
	IOCLR0=EN;
}

void lcd_data(u8 data)
{
	IOCLR0=DATA_PINS;
	IOSET0=((data&0xF0)>>4)<<14;
	IOSET0=RS;
	IOSET0=EN;
	delay_ms(2);
	IOCLR0=EN;
	
	IOCLR0=DATA_PINS;
	IOSET0=(data&0xF)<<14;
	IOSET0=RS;
	IOSET0=EN;
	delay_ms(2);
	IOCLR0=EN;
}

void lcd_string(char *s)
{
	while(*s)
		lcd_data(*s++);
}

