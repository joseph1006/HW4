#include <stdio.h>
#include <stdlib.h>

#define STUDENTS 6
#define EXAMS 4

int min(const int grades[][EXAMS], int pupils, int tests);
int max(const int grades[][EXAMS], int pupils, int tests);
int min1(const int grades[EXAMS], int pupils, int tests);
int max1(const int grades[EXAMS], int pupils, int tests);
double average(const int setOfGrafes[], int tests);
void printarr(const int a[][EXAMS], int pupils, int tests);
int main()
{
	int student;
	const int stugrades[STUDENTS][EXAMS] = {
		{77,68,86,73},
		{96,87,89,78},
		{70,90,86,81},
		{50,60,89,78},
		{96,70,89,88},
		{96,100,99,78}
	};
	printf("The array is:\n");
	printarr(stugrades, STUDENTS, EXAMS);
	printf("\n\nLowest grade : %d \n Hightest grade : $d\n",min(stugrades,STUDENTS,EXAMS),max(stugrades,STUDENTS,EXAMS));
	printarr(stugrades, STUDENTS, EXAMS);
	for (student = 0; student < STUDENTS; student++)
	{
		printf("The average grade for student %d is %.2f\n", student, average(stugrades[student], EXAMS));
		printf("student %d Lowest grade : %d \n Hightest grade : $d\n", min1(stugrades[student], STUDENTS, EXAMS), max1(stugrades[student], STUDENTS, EXAMS));
	}
	system("PAUSE");
}

void printarr(const int grades[][EXAMS], int pupils, int tests)
{
	int i, j;
	printf("	[0]		[1]		[2]		[3]");
	for (i = 0; i < pupils; i++)
	{
		printf("\nStudentGrades[%d]", i);
		for (j = 0; j < tests; j++)
		{
			printf("%-5d",grades[i][j]);
		}
		printf("\n");
	}
}

int min(const int grades[][EXAMS], int pupils, int tests)
{
	int i, j;
	int low = 100;
	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grades[i][j] < low)
			{
				low = grades[i][j];
			}
		}
	}
	return low;
}

int max(const int grades[][EXAMS], int pupils, int tests)
{
	int i, j;
	int high = 0;
	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grades[i][j] > high)
			{
				high = grades[i][j];
			}
		}
	}
	return high;
}

int min1(const int grades[EXAMS], int pupils, int tests)
{
	int i, j;
	int low = 100;
	for (j = 0; j < tests; j++)
	{
		if (grades[j] < low)
		{
			low = grades[j];
		}
	}
	return low;
}

int max1(const int grades[EXAMS], int pupils, int tests)
{
	int i, j;
	int high = 0;
	for (j = 0; j < tests; j++)
	{
		if (grades[j] > high)
		{
			high = grades[j];
		}
	}
	return high;
}

double average(const int grades[], int tests)
{
	int i;
	int tt = 0;
	for (i = 0; i < tests; i++)
	{
		tt += grades[i];
	}
	return tt;
}