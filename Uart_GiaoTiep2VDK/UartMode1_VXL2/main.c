#include<main.h>
#include<..\Lib\UartMode1.h>

void main()
{
	P1_0 = 0;		// Tat LED

	Uart_Init();

	while(1)
	{
		if(Uart_Data_Ready())
		{
		 	if(Uart_Read()==0x01)
			{
			 	P1_0 = 1;	// Bat LED
			}
			else
			{
			 	P1_0 = 0;	// Tat LED
			}
		}
	}
}