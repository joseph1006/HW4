#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int addbyone(int &xptr);

void main()
{
	int x = 100;
	int y = addbyone(x);
	cout << "x=" << x << endl;
	system("PAUSE");
}

int addbyone(int &xref)
{
	xref++;
	cout << "*xptr = " << xref << endl;
	return xref;
}
