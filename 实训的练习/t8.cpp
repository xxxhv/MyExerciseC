#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)



int t8main()
{
	int i = 1;
	printf("输入一个数:\n");
	scanf("%d", &i);
	printf("%d =", i);
	for (int a = 1; a <= i; a++)
	{
		if (i%a == 0)
		{
			printf(" * %d", a);
			i = i / a;
			a = 1;
		}
	}
	system("pause");
	return 0;
}

