#include "header.h"
unsigned int flag=0;
CAN_MSG m1;
int main(void)
{
	can1_init();
	uart0_init(115200);
//	config_vic();
//	enable_can1_rx_interrupt();
	uart0_string("UART0 Is Initialized\n");
	while(1)
	{
		
//		if(flag==1)
//		{	
			can1_rx(&m1);
			uart0_hex(m1.id);
			uart0_string("	");
			uart0_hex(m1.rtr);
			uart0_string("	");
			uart0_hex(m1.dlc);
			uart0_string("	");
			uart0_hex(m1.byteA);
			uart0_string("	");
			uart0_hex(m1.byteB);
			uart0_string("\r\n");
			flag=0;
//		}	
	}
}
