#include <stdio.h>
#include <stdlib.h>
//Function declaration
int add(int x , int y);

int main() 
{
	int firstNumber, secondNumber, sum;
	
	printf("Enter firstNumber: ");
	scanf("%d" , &firstNumber);
	
	printf("Enter secondNumber: ");
	scanf("%d" , &secondNumber);
	//Function call
	sum = add (firstNumber, secondNumber);
	printf("Sum = %d\n" , sum);
	
	return 0;
}
//Function definition
int add(int x , int y)
{
	return x + y;
}

