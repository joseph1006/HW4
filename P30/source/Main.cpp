#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void inverse(int*);

void main()
{
	int a[3] = { 3,5,7 }, i;
	for (i = 0; i < 3; i++)
	{
		cout << a[i]<<"  ";
	}
	cout << endl;
	inverse(a);
	for (i = 0; i < 3; i++)
	{
		cout << a[i] << "  ";
	}
	cout << endl;
	system("PAUSE");
}

void inverse(int* b)
{
	int tmp[3], i;
	for (i = 0; i < 3; i++)
	{
		tmp[2 - i] = b[i];
	}
	for (i = 0; i < 3; i++)
	{
		b[i] = tmp[i];
	}
}