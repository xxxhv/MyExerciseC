#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)



int t12Smain()
{
	int n = 1;
	for (int i = 1; i <= 10; i++)
	{
		n = (n + 1) * 2;
	}
	printf("%d\n", n);
	system("pause");
	return 0;
}

