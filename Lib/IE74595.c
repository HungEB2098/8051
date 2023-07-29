#include"IE74595.h"
#include"main.h"
#include"port.h"
// Yeu cau: Tao file port.h chua cac ket noi phan cung nhu sau:
//sbit SHCP = P2^0;
//sbit DS = P2^1;
//sbit STCP = P2^2;
void Out(unsigned char *p,unsigned char n) {
	unsigned char i,j,b;
	for(j=0;j<n;j++) {
		b = *(p+n-j-1);
	for(i = 0;i<8;i++) {
		DS = b & (0x80>>i);
		SHCP = 0;
		SHCP = 1;
	}
	}
	STCP = 0;
	STCP = 1;
}