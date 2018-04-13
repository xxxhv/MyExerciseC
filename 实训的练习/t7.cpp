#include<stdio.h>
#include<stdlib.h>
bool f(int x)
{
	int a, b, c;
	a = x / 100;
	b = (x % 100) / 10;
	c = x % 10;
	if (x == a*a*a + b*b*b + c*c*c)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	for (int i = 100; i < 1000; i++)
	{
		if (f(i))
		{
			printf(" %2d", i);
		}
	}
	system("pause");
	return 0;
}

