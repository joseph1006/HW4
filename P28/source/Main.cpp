#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define SIZE 5

using namespace std;

void modArr(int b[], int size);
void modEle(int e);

void main()
{
	int a[SIZE] = { 0,1,2,3,4 };
	int i;
	printf("Effects of passing entire array by reference:\n\nThe values of the original array are:\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%3d", a[i]);
	}
	cout << endl;
	modArr(a, SIZE);
	printf("The values of the modified array are:\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%3d", a[i]);
	}
	printf("\n\n\nEffects of passing array element by value:\n\nThe value of a[3] is %d\n", a[3]);
	modEle(a[3]);
	printf("The value of a[3] is %d\n", a[3]);
	system("PAUSE");
}

void modArr(int b[], int size)
{
	int j;
	for (j = 0; j < size; j++)
	{
		b[j] *= 2;
	}
}

void modEle(int e)
{
	printf("Value in modifyElement is %d\n", e *= 2);
}