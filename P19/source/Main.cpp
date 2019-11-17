#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

void main()
{
	char str1[20];
	char str2[]= "string literal";
	int i;
	printf("Enter a string :");
	cin >> str1;
	printf("string1 is %s\nstring2 is %s\n", str1, str2);
	for (i = 0; str1[i] != '\0'; i++)
	{
		printf("%c ", str1[i]);
	}
	printf("\n");
	system("PAUSE");
}