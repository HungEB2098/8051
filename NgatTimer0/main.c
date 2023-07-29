#include"main.h"
#include"..\Lib\Delay.h"

unsigned char cnt = 10;

void main()
{
	unsigned char i;
	// Cau hinh cho timer0 hoat dong o muc 1
	TMOD &= 0xF0;
	TMOD |= 0x01;

	TH0 = 0x3C;
	TL0 = 0xB0; // 65536 - 50000 = 15536ms

	ET0 = 1;	// Cho phep ngat timer 0 
	EA = 1;		// Cho phep ngat toan cuc
	TR0 = 1;	// Cho phep timer0 hoat dong

	while(1)
	{
		P1 = 0x00;
		Delay_ms(100);
		for(i=0;i<8;i++)
		{
		 	P1 <<= 1;
			P1 |= 0x01;
			Delay_ms(100);
		}
	}
}

void Timer0Overflow(void) interrupt	 1  //Ngat Timer/Couter 0
{
	// Nap lai gia tri cho TH0 va TL0
	TH0 = 0x3C;
	TL0 = 0xB0;

	cnt--;
	if(cnt==0)
	{
		cnt = 10;

		// User code
		P2 = ~P2;
	}
}
