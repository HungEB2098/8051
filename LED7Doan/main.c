#include"main.h"
#include<..\Lib\Delay.h>
// Su dung unsigned char code Code7Seg[] = {,,,,,}
void main() {
	//0 || P2 = 0xC0;
	//1 || P2 = 0xF9;
	//2 || P2 = 0xA4;
	//3 || P2 = 0xB0;
	//4 || P2 = 0x99;
	//5 || P2 = 0x92;
	//6 || P2 = 0x82;
	//7 || P2 = 0xF8;
	//8 || P2 = 0x80;
	//9 || P2 = 0x90;
	
	unsigned int i;
	
	while(1) {
		
		for(i = 0;i<9;i++)	{
			P2 = 0xC0;
			Delay_ms(200);
			P2 = 0xF9;Delay_ms(200);
			P2 = 0xA4;Delay_ms(200);
			P2 = 0xB0;Delay_ms(200);
			P2 = 0x99;Delay_ms(200);
			P2 = 0x92;Delay_ms(200);
			P2 = 0x82;Delay_ms(200);
			P2 = 0xF8;Delay_ms(200);
			P2 = 0x80;Delay_ms(200);
			P2 = 0x90;Delay_ms(200);
}
}
}