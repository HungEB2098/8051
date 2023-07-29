#include<main.h>
#include<..\Lib\Delay.h>
void Uart_Init() {
	//Khoi tao UART Mode1, 9600baud
	SM0 = 0; SM1 = 1; //UART Mode 1
	TMOD = 0x02; //Timer1 hoat dong o che do 8bit tu nap lai
	TH1 = 0xFD;  //Toc do baud 9600
	TR1 = 1;     //Timer1 bat dau chay
	TI= 1;    //San sang gui du lieu
	REN = 1;  //Cho phep nhan du lieu
}

void UART_Write(char c) {
	
	while(TI == 0);
	 TI = 0;
	 SBUF = c;
}

void Uart_Write_Text(char *s) {
	unsigned char i = 0;
	while(s[i] != 0)
	{
    Uart_Write(s[i]);
		i++;
	}		
}

char Uart_Read() {
	RI = 0;  //Co bao ngat nhan
	return SBUF;
	
}

void main() {
	char i;
	Uart_Init();
	
	while(1) {
		
	}
	
}
