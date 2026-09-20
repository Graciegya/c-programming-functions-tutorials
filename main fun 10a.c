#include <stdio.h>
#include <stdlib.h>

//Function declaration
float calculateTotal(float a, float b, float c);
float calculateAverage(float total);
void displayGrade(float average);
void displayStatus(float average);

int main() 
{
	float cProgramming; 
	float mathematics;
	float electronics;
	float total;
	float average;
	
	printf("Enter C Programming score: ");
	scanf("%f" , &cProgramming);
	
	printf("Enter Mathematics score: ");
	scanf("%f" , &mathematics);
	
	printf("Enter Electronics score: ");
	scanf("%f" , &electronics);
	
	//Function calls
	total = calculateTotal(cProgramming, mathematics, electronics);
	
	printf("\n---------- STUDENT RESULT----------\n");
	printf("C Programming: %.2f\n" , cProgramming);
	printf("Mathematics: %.2f\n" , mathematics);
	printf("Electronics: %.2f\n" , electronics);
	printf("Total Score: %.2f\n" , total);
	printf("Average Score: %.2f\n" , average);
	
	displayGrade(average);
	displayStatus(average);
	
	return 0;
}
//Function to calculate total
float calculateTotal(float a, float b, float c)
{
	return a + b + c;
}
//Function to calculate average
float calculateAverage(float total)
{
	return total / 3;
}
//Function to display grade
void displayGrade(float average)
{
	if (average >= 80)
	{
		printf("Grade: A\n");
	}
	else if (average >= 70)
	{
		printf("Grade: B\n");
	}
	else if (average >= 60)
	{
		printf("Grade: C\n");
	}
	else if (average >= 50)
	{
		printf("Grade: D\n");
	}
	else
	{
		printf("Grade: F\n");
	}
}
//Function to display pass/fail status
void displayStatus(float average)
{
	if (average >= 50)
	{
		printf("Status: PASS\n");
	}
	else
	{
		printf("Status: FAIL\n");
	}
}
