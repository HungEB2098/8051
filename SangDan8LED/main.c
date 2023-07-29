#include"main.h"
#include<..\Lib\Delay.h>
void SangDan()
 {
	 unsigned char i;
		// Sang dan
		P0 = 0x00;
		for(i = 0;i<8;i++) {
			P0 = (P0<<1) | 0x01;
			Delay_ms(200);
		}
		// Tat dan
		for(i = 0;i<8;i++) {
			P0 = (P0>>1);
			Delay_ms(200);
		}
	}
//---------------------
void XenKe() {
	unsigned char i;
	
	for(i = 0;i<100;i++){
		P0 = 0xAA;
		Delay_ms(200);
	  P0 = 0x55;
		Delay_ms(200);
	}
}



	void main() {
	
	while(1) {
		SangDan();
		XenKe();
	}
}
whi