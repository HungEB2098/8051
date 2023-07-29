#include<main.h>
#include"..\Lib\Delay.h"

sbit m = P1^0;
sbit n = P2^0;

void main() {
	n = 0;
	while(1) {
		if(m==0) {
			Delay_ms(200);
			if(m==0) {
				n = !n;
				while(m == 0 );
			}
		}
	}
}