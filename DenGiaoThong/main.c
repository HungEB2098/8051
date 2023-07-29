#include"main.h"
#include<..\Lib\Delay.h>
unsigned char code Code7Seg[] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};
sbit R = P0^0;
sbit Y = P0^1;
sbit G = P0^2;
#define LED1 P2
#define LED2 P3
void main() {
	signed char i;
	while(1) {
		R= 0;Y=1;G=1;
		for(i = 20;i>=0;i--) {
			LED1 = Code7Seg[i/10];
			LED2 = Code7Seg[i%10];
			Delay_ms(1000);
		}
		R= 1;Y=0;G=1;
		for(i = 3;i>=0;i--) {
			LED1 = Code7Seg[i/10];
			LED2 = Code7Seg[i%10];
			Delay_ms(1000);
		}
		R= 1;Y=1;G=0;
		for(i = 15;i>=0;i--) {
			LED1 = Code7Seg[i/10];
			LED2 = Code7Seg[i%10];
			Delay_ms(1000);
		}
	}
}