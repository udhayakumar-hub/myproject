typedef unsigned int u32;
typedef unsigned char u8;

typedef struct CAN
{
	u32 id;    // 11 bit IDENTIFIER in a 32 bit variable
	u32 rtr;   // 1 bit RTR in a 32 bit variable
	u32 dlc;   // DLC is 4 bits in a 32 bit variable
	u32 byteA; // 4 bytes of data in CAN in 4 bytes variable
	u32 byteB; // 4 bytes of data in CAN in 4 bytes variable
}CAN_MSG;  

void can1_tx(CAN_MSG m1);
void can1_init(void);
void delay_ms(unsigned int);
void adc_read(u32 *ubuf);
void adc_init(void);
void adc_read(u32 *ubuf);
void uart0_init(u32 baud);
void uart0_string(char *s);

