#include"main.h"
#include"..\Lib\LCD4.h"
//De su dung ICD khoi tao Lcd_Init()
//Xuat ki tu Lcd_Chr(1,2,'A')
//Xuat ki tu Lcd_Chr_Cp : Xuat sau con tro
//Lcd_Out : Xuat chuoi
//Lcd_Cmd : Xoa chuoi
void main()
{
	Lcd_Init();

	Lcd_Chr(1,2,'A');

	while(1)
	{

	}
}