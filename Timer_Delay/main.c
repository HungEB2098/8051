#include"main.h"
#include<..\Lib\Delay.h>
void Delay_ms_Timer0(unsigned int t)
{
    //64536 = FC18: Dem den 1000ms
	do{
	 	TL0 = 0x18;
		TH0 = 0xFC;
		TR0 = 1;	// Timer0 bat dau dem
		while(!TF0);
		TR0 = 0;	// Timer0 ngung dem
		TF0 = 0;
		t--;
	}while(t!=0);
}

void main()
{
	// Chon mode cho T0
	TMOD &= 0xF0;	// Xoa cac bit dieu khien thanh ghi TMOD cua T0
	TMOD |= 0x01;	// Cho mode 1 cho timer0

	while(1)
	{
		P2_0 = !P2_0;
		Delay_ms_Timer0(1000);
	}
}