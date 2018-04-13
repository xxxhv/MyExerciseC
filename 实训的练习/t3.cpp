#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int i = 0, j = 0, k = 0;
int t3main()
{
	int a=0;
	scanf("%d %d %d", &i, &j, &k);
	if(i>j)
	{
		a = i;
		i = j;
		j = a;
	}
	if (i > k)
	{
		a = i;
		i = k;
		k = a;
	}
	if (j > k)
	{
		a = j;
		j = k;
		k = a;
	}
	printf("%d %d %d", i, j, k);
	system("pause");
	return 0;
}

