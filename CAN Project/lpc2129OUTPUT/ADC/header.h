typedef unsigned int u32;
typedef unsigned char u8;
void adc_init(void);
void adc_read(u32 *ubuf);
void uart0_init(u32 baud);
void uart0_tx(u8 data);
void uart0_hex(u32 n);
void uart0_string(char *s);
void delay_ms(unsigned int ms);

