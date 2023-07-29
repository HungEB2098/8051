#include<main.h>
#include<..\Lib\UartMode1.h>
#include<..\Lib\Delay.h>

void main()
{
	Uart_Init();

	while(1)
	{
		if(P1_0==0) //tat LED
		{
		 	Delay_ms(20);
			Uart_Write(0x01); // Gia su gui di thì ta bat LED
			while(P1_0==0);
		}

		if(P1_1==0)
		{
		 	Delay_ms(20);
			Uart_Write(0x00); // Gia su gui di thì ta tat LED
			while(P1_1==0);
		}
	}
}