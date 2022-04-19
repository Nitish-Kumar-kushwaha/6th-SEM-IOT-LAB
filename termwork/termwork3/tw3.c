#include"at89c51ed2.h"
#include<intrins.h>

//LCD FUNCTION PROTOYPE

void lcd_init(void);
void lcd_comm(void);
void lcd_data(void);

unsigned char xdata arr[16] = {"SAY MY NAME"};
unsigned char xdata arr1[16] = {"I AM DANGER"};
unsigned char temp1 = 0x00;
unsigned char temp2;
unsigned int i= 0;

void main(void){
	AUXR = 0x10;
	lcd_init();
	temp1 = 0x80;
	lcd_comm();
	for(i=0;i<15;i++){
		temp2 = arr[i];
		lcd_data();
	}
	temp1 = 0xc0;
	lcd_comm();
	for(i=0;i<15;i++){
		temp2 = arr1[i];
		lcd_data();
		}
}
