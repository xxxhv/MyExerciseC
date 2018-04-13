#include<stdio.h>
#include<stdlib.h>

void fun(int n)
{
	int k = 0, l = n;
	for (int a = 1; a < n; a++)
	{
		if (n%a == 0)
		{
			k += a;
			n = n / a;
			n = l;
		}
	}
	if (l == k)
	{
		printf("%d ", l);
	}
}

int t10main()
{
	int i = 1, k=0;
	printf("ÍêÊýÓÐ:\n");

	for (int n = 2; n <= 1000; n++)
	{
		fun(n);
	}
	
	system("pause");
	return 0;
}
