#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void main()
{
	char arr[5];
	printf("    arr = %p\n&arr[0] = %p\n   &arr = %p\n", arr, &arr[0], &arr);
	system("PAUSE");
}