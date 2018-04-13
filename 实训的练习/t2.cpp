#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)


int t2main()
{
	int year = 2000, month = 1, day = 1, sum = 0;
	int m[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	printf("\n请输入 XX年XX月XX日 ：");
	scanf("%d %d %d", &year, &month, &day);
	if (year % 4 == 0)
	{
		m[1] = 29;
	}
	if (year % 1000 == 0)
	{
		m[1] = 28;
	}
	for (int i = 1; i < month; i++)
	{
		sum += m[1];
	}
	sum += day;
	printf("这是第 %d 天",sum);
	system("pause");
	return 0;
}

