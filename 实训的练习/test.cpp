#include<stdio.h>
#include<stdlib.h>


int tmain()
{
	int n = 0;
	int i = 4, j = 6;
	char c[] = "sadsafqw";

	printf("size of int is %d\n", sizeof(int));
	printf("double of size is %d\n", sizeof(double));
	printf("float of size is %d\n", sizeof(float));

	printf("2<<3 is %d\n", n >> 3);
	
	printf("i&j is %d\n", (i&j) << 4);
	printf("i&j is %d\n", i | (j<<4));
	printf(" %s\n", c);
	printf(" %d\n", c);
	printf(" %d\n", *c);
	printf(" %c\n", *c);



	system("pause");
	return 0;
}
