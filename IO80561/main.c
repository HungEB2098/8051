#include<REGX52.h>
void Delay_ms(unsigned int t)
 {
	 unsigned int x,y;
	 for (x=0;x<t;x++) {
        for(y = 0;y<123;y++); // Dalay ~1ms
     }
 }
 void main() {
	while(1) {
		unsigned int i;
		for(i = 0;i<7;i++) {
			P0_i = 0x00; 
		  Delay_ms(500);
		  P0_i = 0x01; 
		  Delay_ms(500);
		}
    
	}
}