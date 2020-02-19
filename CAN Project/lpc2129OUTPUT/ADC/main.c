#include <LPC21xx.H>
#include "header.h"

main()
{
	unsigned int adc;
	VPBDIV=1;//PCLK=60MHz
	adc_init();
	uart0_init(115200);
	uart0_string("UART0_initialised\r\n");
	while(1)
	{
		adc_read(&adc);
		uart0_hex(adc);
		uart0_string("\r\n");
		delay_ms(500);
	}
}
