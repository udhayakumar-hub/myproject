#include "header.h"
main()
{
	u32 adc_val;
	CAN_MSG m1;
	can1_init();
	adc_init();
	m1.id=0x1AB;
	m1.rtr=0;
	m1.dlc=4;
	m1.byteA=0;
	m1.byteB=0;
	while(1)
	{
			adc_read(&adc_val);
			m1.byteA=adc_val;
			can1_tx(m1);   
			delay_ms(250);
	}
}
