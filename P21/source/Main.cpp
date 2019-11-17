#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void staticArrInit();
void autoArrInit();

void main()
{
	printf("First call to each function:\n");
	staticArrInit();
	autoArrInit();
	printf("\n\nSecond call to each function:\n");
	staticArrInit();
	autoArrInit();
	printf("\n");
	system("PAUSE");
}

void staticArrInit()
{
	static int arr1[3];
	int i;
	printf("\nValues on entering staticArrInit:\n");
	for (i = 0; i <= 2; i++)
	{
		printf("arr1[%d] = %d", i, arr1[i]);
	}
	printf("\nValues on exiting staticArrInit:\n");
	for (i = 0; i <= 2; i++)
	{
		printf("arr1[%d] = %d", i, arr1[i]+=5);
	}
}
void autoArrInit()
{
	int arr1[3] = {1,2,3};
	int i;
	printf("\nValues on entering staticArrInit:\n");
	for (i = 0; i <= 2; i++)
	{
		printf("arr1[%d] = %d", i, arr1[i]);
	}
	printf("\nValues on exiting staticArrInit:\n");
	for (i = 0; i <= 2; i++)
	{
		printf("arr1[%d] = %d", i, arr1[i] += 5);
	}
}