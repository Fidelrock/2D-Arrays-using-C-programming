#include <stdio.h>

int main() 
{
	float marks[30][4], sum, average;
	int i, j;
	
	//Input the marks of 30 students
	for (i = 0; i < 30; i++)
	{
		printf("Enter marks for student %d: ", i + 1);
		printf("\n");
		for (j = 0; j < 4; j++)
		{
			//printf("Enter marks for student %d: ", i + 1);
			scanf("%f", &marks[i][j]);
		}
	}
	
	//Calculate sum and average for each student
	for (i = 0; i < 30; i++)
	{
		sum = 0;
		for (j = 0; j < 4; j++)
		{
			sum = sum + marks[i][j];
		}
		
		average = sum / 4;
		
		//Print the class
		if (average >= 70 && average <= 100)
			printf("Student %d has obtained First Class.\n", i + 1);
		else if (average >= 60 && average <= 69)
			printf("Student %d has obtained Second Class (Upper Division).\n", i + 1);
		else if (average >= 50 && average <= 59)
			printf("Student %d has obtained Second Class (Lower Division).\n", i + 1);
		else if (average >= 40 && average <= 49)
			printf("Student %d has passed.\n", i + 1);
		else
			printf("Student %d has failed.\n", i + 1);
	}
	
	return 0;
}