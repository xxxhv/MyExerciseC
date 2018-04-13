#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)


int t4main()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%2d*%2d=%2d ", j, i, i*j);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}

