#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 0;
	for (int i = 101; i <= 200; i++)
	{
		for(int j=2;j<100;j++)
		{
			if (i%j == 0)
			{
				a++;
				break;
			}
			
		}
		if(a==0)
		{
			printf("%2d ", i);
		}
		else
		{
			a = 0;
		}
	}

	system("pause");
	return 0;
}

