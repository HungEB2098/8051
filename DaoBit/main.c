#include<regx52.h>

void Delay_ms(unsigned int t) {
    unsigned int x,y;
    for(x = 0;x < t;x++) {
        for(y = 0;y<123;y++) ;
    }
}
void main() {
  while(1) {
		P0 = 0x80;
		Delay_ms(500);
    while(P0 != 0x00) {
      
			P0 = P0 >> 1;
        Delay_ms(500);
    }
		//----------------------------
		P2 = 0x01;
		Delay_ms(500);
    while(P2 != 0x00) {
      
			P2 = P2 << 1;
        Delay_ms(500);
    }
		
	}
		
	
	
}