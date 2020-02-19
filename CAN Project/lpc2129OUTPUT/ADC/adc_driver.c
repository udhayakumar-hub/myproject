/*LPC2129 adc_driver.c*/
#include <LPC21xx.H>
#include "header.h"

#define ADC_DONE 0x80000000
#define PDN (1<<21)
#define CLKS (0x7<<17) //11clocks for 10bits
#define CLKDIV 0xE00
#define AIN0 0x1
#define AIN1 0x2
#define AIN2 0x4
#define AIN3 0x8
void adc_init()
{
	PINSEL1|=(1<<22);//P0.27 is AIN0
	PINSEL1&=~(1<<23);//P0.27 is AIN0
	ADCR|=CLKDIV|AIN0|CLKS|PDN;
}


void adc_read(u32 *ubuf)
{
	*ubuf=0;
	ADCR|=1<<24;//start ADC
	while((ADDR & ADC_DONE)==0);
	ADCR &=~(1<<24);//stop ADC	
	*ubuf=(ADDR>>6) & 0x3FF;
	ADCR&=~(1<<24);//stop ADC
 }
