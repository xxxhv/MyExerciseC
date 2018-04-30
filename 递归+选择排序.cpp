
#include <stdlib.h>
#include <iostream>
#include <time.h>
using namespace std;

int a[10];

void w(int n) 
{
	int temp;
	int k=10-n;
	for (int i = 0; i <= k; i++)
	{
		if (a[k] > a[i])
		{
			temp = a[i];
			a[i] = a[k];
			a[k] = temp;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl << endl;
	if (n != 0)
	{
		w(n - 1);
	}
}

int main(int argc, LPTSTR argv[])
{
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		a[i] = rand() % 1000;
	}

	w(10);
	
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl << endl;

	system("pause");
	return 0;
}

