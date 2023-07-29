#include"main.h"
#include"..\Lib\Delay.h"
#include"..\Lib\IE74595.h"
unsigned char code Code7Seg[] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};

void main() {
	unsigned char i;
	while(1) {
		for(i=0;i<9;i++)
 {
Out(&Code7Seg[i],1);
	 Delay_ms(1000);
 }
	}
	
}