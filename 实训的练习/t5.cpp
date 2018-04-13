#include<stdio.h>
#include<stdlib.h>

int ts[3] = { 1,0,0 }, tb = 0, s;
void fun()
{
	s = ts[0];
	ts[0] = tb;
	tb += ts[2];
	ts[2] = ts[1];
	ts[1] = s;
}

int main()
{
	for (int i = 1; i <= 40; i++)
	{
		fun();
		printf("%dÔÂºóÍÃ×ÓÓÐ%d\n" , i, ts[0] + ts[1] + ts[2] + tb);
	}

	printf("40ÔÂºóÍÃ×ÓÓÐ%d\n", ts[0] + ts[1] + ts[2] + tb);
	system("pause");
	return 0;
}



