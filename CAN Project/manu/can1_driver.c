#include <LPC21xx.H>
#include "header.h"

void can1_init()
{
	VPBDIV=1;//PCLK=60MHz
	PINSEL1&=~(1<<19);
	PINSEL1=(1<<18);
	C1MOD=0x1;//CAN1 into reset mode
	C1BTR=0x001C001D;//B125Kbps at PCLK=60MHz
	AFMR=0x2;//Accept all incoming messages
	C1MOD=0x0;//CAN1 into normal mode
}

void can1_tx(CAN_MSG m1)
{
	C1TID1=m1.id;
	C1TFI1=(m1.dlc<<16);
	if(m1.rtr==0) //if data frame
	{
		C1TFI1&=~(1<<30);//RTR=0
		C1TDA1=m1.byteA;
		C1TDB1=m1.byteB;
	}
	else	
		C1TFI1|=(1<<30);
	
	C1CMR=(1<<0)|(1<<5);//Start Xmission & use Tx Buf1
	while((C1SR&(1<<3))==0);		
}
