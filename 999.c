#include"reg52.h"
void delay(int t)
{
	int i,j;
	for(j=t;j>0;j--)
	for(i=110;i>0;i--);
}

	
unsigned char c[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
sbit P10=P1^0;
sbit P11=P1^1;
sbit P12=P1^2;
int i,j;
void main()
{

int a,s,d;
while(1)
{

for(i=0;i<1000;i++)
{
a=i/100;
s=i%100/10;
d=i%10;
for(j=0;j<333;j++)
{
P12=0;
P11=0;
P10=1;
P0=c[d];
delay(1);


P12=0;
P11=1;
P10=0;																					   
P0=c[s];
delay(1);
 

P12=1;
P11=0;
P10=0;
P0=c[a];
delay(1);

}
}

}

}
