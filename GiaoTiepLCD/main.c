#include"main.h"
#include"..\lib\Delay.h"

// Khai bao ket noi voi LCD
sbit LCD_RS = P2^0;
sbit LCD_EN = P2^1;
#define LCD_DATA P3

void Lcd_Cmd(unsigned char cmd)
{
	LCD_RS = 0;
	LCD_DATA = cmd;
	LCD_EN = 0;
	LCD_EN = 1;

	if(cmd<=0x02)
	{
	 	Delay_ms(2);
	}
	else
	{
	 	Delay_ms(1);
	}
}

void Lcd_Chr_Cp(char c)		// Current Position
{
 	LCD_RS = 1;
	LCD_DATA = c;
	LCD_EN = 0;
	LCD_EN = 1;
	Delay_ms(1);
}

// Xuat ra man hinh LCD 1 ky tu, ngay tai vi tri dong row, cot col
void Lcd_Chr(unsigned char row, unsigned char col, char c)
{
	unsigned char cmd;

	// Di chuyen co tro den vi tri can thiet
	cmd = (row==1?0x80:0xC0) + col - 1;
	Lcd_Cmd(cmd);

	// Xuat ky tu
	Lcd_Chr_Cp(c);
}	

void Lcd_Out_Cp(char *str)
{
 	unsigned char i = 0;
	while(str[i]!=0)
	{
	 	Lcd_Chr_Cp(str[i]);
		i++;
	}
}

void Lcd_Out(unsigned char row, unsigned char col, char *str)
{
 	unsigned char cmd;

	// Di chuyen co tro den vi tri can thiet
	cmd = (row==1?0x80:0xC0) + col - 1;
	Lcd_Cmd(cmd);

	Lcd_Out_Cp(str);
}

void Lcd_Init()
{
 	Lcd_Cmd(0x30);
	Delay_ms(5);
	Lcd_Cmd(0x30);
	Delay_ms(1);
	Lcd_Cmd(0x30);

	Lcd_Cmd(0x38); 		// So dong hien thi la 2, font 5x8

	Lcd_Cmd(0x01);		// Xoa noi dung hien thi
	Lcd_Cmd(0x0C);	  	// Bat hien thi va tat con tro
}

void main()
{
	unsigned int i;
	Lcd_Init();	
	Lcd_Out(2,2,"Hello world");
  
	while(1)
	{
  Lcd_Cmd(0x18);
		Delay_ms(50);
	}
}