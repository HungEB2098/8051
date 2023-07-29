#include<main.h>
#include<..\Lib\Delay.h>

void main() {
 unsigned char b;
 SM0 = SM1 = 0; // UART Mode 0
 REN = 1; //Cho phep nhan du lieu
 P1_0 = 0;
	while(1) {
		P3_2 = 0;
    P3_2 = 1; //Tao xung chot ngo vao 74265
    RI = 0;//Chuyen het du lieu tu dong nhay len muc 1
    while(RI ==0);
    b = SBUF;
		if((b&0x02) == 0) {P1_0 = 1;}
		if((b&0x01) == 0) {P1_0 = 0;}
	}
}