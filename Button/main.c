#include<main.h>
#include "..\Lib\Delay.h"

sbit m = P1^0;
sbit n = P1^1;

bit t = 0;
int Kiemtra() {
	unsigned int i;
	for(i = 0;i<50;i++) {
		Delay_ms(10);
		if(m==0) {
			if(t ==0) {
				t = 1;
			return 1;
		}
	}
	else {
		t = 0;
	}
	}
		return 0;
	}



void main() {
  unsigned int i;
	
	while(1) {
		P2 = 0x00;
		for(i = 0;i<20;i++) {
			if(Kiemtra()) break;
				P2 = ~P2;
			
	}
	P2 = 0x55;
	for(i = 0;i<20;i++) {
			if(Kiemtra()) break;
				P2 = ~P2;
			
	}
}
}