// Mo rong ngo ra dung 74hc595
// Yeu cau: Tao file port.h chua cac ket noi phan cung nhu sau:
//sbit SHCP = P2^0;
//sbit DS = P2^1;
//sbit STCP = P2^2;
#ifndef _IE74595_H_
#define _IE74595_H_

void Out(unsigned char *p,unsigned char n);

#endif