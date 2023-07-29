#include<main.h>
#include<..\Lib\Delay.h>
void Mode(unsigned char b) {
	SBUF = b;
	while(TI == 0);
	TI = 0;//Co bao ngat truyen
	// Cho cho co TI bat len 1
	P3_2 = 0;
	P3_2 = 1;
}
void main() {
	unsigned int i;
	unsigned a = 0x00;
	SM0 = SM1 = 0; //UART mode 0
  for(i = 0;i<8;i++) {
		Mode(a);
		Delay_ms(1000);
		a << 1;
		
		
	}
	
	while(1) {
		
	}
}