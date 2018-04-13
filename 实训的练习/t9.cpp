#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable:4996)



int t9main()
{
	char c[50];
	int i, el = 0, sp = 0, nu = 0, other = 0;
	gets_s(c);//输入字符串            
	for (i = 0; i<strlen(c); i++)//strlen返回字符串长度      
	{
		if ((c[i] >= 'A' && c[i] <= 'Z') || (c[i] >= 'a' && c[i] <= 'z'))
			el++;
		else
			if (c[i] >= '0'&&c[i] <= '9')
				nu++;
			else
				if (c[i] == ' ')
					sp++;
				else
					other++;
	}
	printf("英文字母个数=%d\n数 字 个 数 =%d\n空 格 字 数 =%d\n其他字符个数=%d\n", el, nu, sp, other);

	system("pause");
	return 0;
}

