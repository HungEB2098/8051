#include<main.h>
#include<..\Lib\Delay.h>
#include<..\Lib\IE74595.h>
sbit SHCP = P2^0;
sbit DS = P2^1;
sbit STCP = P2^2;

void main() {
	
	unsigned char i,b[2];
	while(1) {
		for(i=0;i<2;i++) {
			b[i] = 0;
		}
		Out(b,2);
		Delay_ms(300);
		for(i=0;i<2;i++) {
			b[i] = 0xFF;
		}
		Out(b,2);
		Delay_ms(300);
	}
}