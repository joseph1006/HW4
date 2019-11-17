#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void main()
{
	int a[10] = {1,8,5,6,4,3,7,9,2,10};
	for (int i = 9; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[j] >= a[j+1])
			{
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}

		cout << "Step ";
		if (10 - i < 10)
		{
			cout << " ";
		}
		cout << (10 - i) << " :{";
		for (int i = 0; i < 10; i++)
		{
			cout << a[i];
			if (i < 9)
			{
				cout << ",";
			}
		}
		cout << "}" << endl;
	}
	system("PAUSE");
}