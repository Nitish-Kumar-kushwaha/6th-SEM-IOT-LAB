#include "at89c51ed2.h"
void delay(unsigned int);
void main(void){
	while(1){
		P0 = 0x00;
		delay(200);
		
		P0 = 0xff;
		delay(200);
	}
}

void delay(unsigned int itime){
	unsigned int i, j;
	for(i = 0; i<itime;i++)
		for(j=0;j<1275;j++);
}
