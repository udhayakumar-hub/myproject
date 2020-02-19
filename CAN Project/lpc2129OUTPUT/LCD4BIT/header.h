typedef unsigned int u32;
typedef unsigned char u8;
void lcd_init(void);
void lcd_cmd(u8 cmd);
void lcd_data(u8 data);
void lcd_string(char *s);
void delay_ms(unsigned int ms);

