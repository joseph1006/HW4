#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define SIZE 100

using namespace std;

int linearSearch(const int array[], int key, int size);

void main()
{
	int a[SIZE];
	int x,key,em;
	for (x = 0; x < SIZE; x++)
	{
		a[x] = 2 * x;
	}
	cout << "Enter integer search key:" << endl;
	cin >> key;
	em = linearSearch(a, key, SIZE);
	if (em != -1)
	{
		cout << "Found value in element " << em << endl;
	}
	else
	{
		cout << "Value not found"<<endl;
	}
	system("PAUSE");
}

int linearSearch(const int arr[], int key, int size)
{
	int n;
	for (n = 0; n < size; ++n)
	{
		if (arr[n] == key)
		{
			return n;
		}
	}
	return -1;
}