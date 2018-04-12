#include"reg52.h"

void delay(int t)
{
	int i,j;
	for(j=t;j>0;j--)
	for(i=110;i>0;i--);
}
//sfr P0=0x90;
sbit P07=P0^7;
sbit P33=P3^3;//io口P3.3
sbit P34=P3^4;//io口P3.3
int k=0;//状态变量

void main()
{


 while(1)
 {

  if(P33==0)//P3.3按下触发蜂鸣器
  {
   k=1;
  }
  if(P34==0)
  {
   k=0;
  }
  if(k==1)
  {
  P07=0;
  delay(100);
  P07=1;
  delay(100);
  }
 }

}
