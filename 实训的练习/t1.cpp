#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int i[4] = {1,2,3,4};
int t1main()
{
	for (int a = 0; a < 4; a++)
	{
		for (int b = 0; b < 4; b++)
		{
			for (int c = 0; c < 4; c++)
			{
				printf("%d%d%d\n",i[a],i[b],i[c]);
			}
			printf("\n");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}

