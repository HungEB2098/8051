#include "main.h"
#include "..\Lib\Lcd4.h"
#include "..\Lib\ADC0804.h"
#include "..\Lib\Delay.h"

void main()
{
	unsigned char adc_value;
	unsigned char t;

	Lcd_Init();
	Lcd_Out(1,1,"NHIET DO: ");
	while(1)
	{
		adc_value = ADC0804_Read();
		t = adc_value * 1.961f + 0.5f;
		
		Lcd_Chr(1,11,t/100+0x30);
		Lcd_Chr_Cp(t%100/10+0x30);
		Lcd_Chr_Cp(t%10+0x30);
		Delay_ms(500);	
	}
}