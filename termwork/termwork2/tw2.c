#include'at89c51ed2.h'
void delay(unsinged int );
void main(void){
	while(1){
		p0 = 0x00;
		delay(200);
		p0 = 0xff;
		delay(200);
	}
}

void delay(unsigned int itime){
	unsigned int i, j;
	for(i = 0; i<itime;i++)
		for(j=0;j<1275;j++);
}
