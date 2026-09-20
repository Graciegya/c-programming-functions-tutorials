#include <stdio.h>
#include <stdlib.h>
//function declaration
void checkEvenOdd(int number);

int main() 
{
	int number;
	printf("Enter number: ");
	scanf("%d" , &number);
	
	//Function call
	checkEvenOdd(number);
	return 0;
}
//Function definition
void checkEvenOdd(int number)
{
	if (number % 2 == 0)
	{
		printf("%d is even number.\n", number);
	}
	else
	{
		printf("%d is odd number.\n" , number);
	}
}

