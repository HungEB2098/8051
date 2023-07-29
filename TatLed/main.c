#include<REGX52.h>
sbit LED_PIN = P0^0; //Dat ten chan P0^0 la LED_PIN
void Delay_ms(unsigned int t)
 {
	 unsigned int x,y;
	 for (x=0;x<t;x++) {
        for(y = 0;y<123;y++); // Dalay ~1ms
     }
 }
 void main() {
	while(1) {
		LED_PIN  = !LED_PIN; // Dao trang thai cua chan LED_PIN
		Delay_ms(500);
	}
}