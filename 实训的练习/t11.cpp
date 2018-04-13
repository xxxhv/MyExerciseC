#include<stdio.h>
#include<stdlib.h>

double l = 0, hx = 10;

int t11main()
{
	l -= hx;
	for (int i = 0; i < 2; i++)
	{
		l += hx * 2;
		hx = hx / 2;
	}
	printf("%f  %f\n", hx, l);

	system("pause");
	return 0;
}

