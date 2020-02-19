typedef unsigned int u32;
typedef unsigned char u8;

typedef struct CAN
{
	u32 id;
	u32 rtr;
	u32 dlc;
	u32 byteA;
	u32 byteB;
}CAN_MSG;



void can1_tx(CAN_MSG m1);
void can1_init(void);
void can1_rx(CAN_MSG *);

void uart0_init(u32 baud);
void uart0_tx(u8 data);
void uart0_string(char *s);
void uart0_hex(u32 n);
void config_vic(void);
void enable_can1_rx_interrupt(void);

