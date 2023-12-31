#include<main.h>
#include<..\Lib\Delay.h>

unsigned char code Code7Seg[] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};

void Display(unsigned int n)
{
	unsigned char chuc_ngan, ngan, tram, chuc, dvi;
	chuc_ngan = n/10000;
	n %= 10000;
	ngan = n/1000;
	n %= 1000;
	tram = n/100;
	n %= 100;
	chuc = n/10;
    dvi = n%10;

	P0 = Code7Seg[chuc_ngan];
	P2_0 = 0;
	Delay_ms(1);
	P2_0 = 1;

	P0 = Code7Seg[ngan];
	P2_1 = 0;
	Delay_ms(1);
	P2_1 = 1;

	P0 = Code7Seg[tram];
	P2_2 = 0;
	Delay_ms(1);
	P2_2 = 1;

	P0 = Code7Seg[chuc];
	P2_3 = 0;
	Delay_ms(1);
	P2_3 = 1;

	P0 = Code7Seg[dvi];
	P2_4 = 0;
	Delay_ms(1);
	P2_4 = 1;
}

void main() {
   unsigned char low, high;
	unsigned int n;

	TMOD &= 0xF0;
	TMOD |= 0x05;
	TR0 = 1;

    while(1)
	{
		
			high = TH0;
			low = TL0;

		n = high;
		n <<= 8;
		n |= low;

		Display(n);	
	}
}