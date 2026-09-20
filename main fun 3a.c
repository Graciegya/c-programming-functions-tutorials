#include <stdio.h>
#include <stdlib.h>
//Function declaration
int add(int x , int y);
int subtract(int x , int y);
int multiply(int x , int y);
float divide(float x , float y);


int main() 
{
	int firstNumber , secondNumber;
	
	printf("Enter firstNumber: ");
	scanf("%d" , &firstNumber);
	printf("Enter secondNumber: ");
	scanf("%d" , &secondNumber);
	
	printf("Addition = %d\n" , add(firstNumber , secondNumber));
	printf("Subtraction = %d\n" , subtract(firstNumber , secondNumber));
	printf("Multiplication = %d\n" , multiply(firstNumber , secondNumber));
	
	if (secondNumber != 0)
	{
		printf("Division = %.2f\n" , divide(firstNumber , secondNumber));
	}
	else
	{
		printf("Division by zero is not allowed\n");
	}
	
	return 0;
}
	//Function definition
	int add(int x , int y)
	{
	return x + y;
	}
	int subtract(int x , int y)
	{
		return x - y;
	}
	int multiply(int x , int y)
	{
		return x * y;
	}
	float divide(float x , float y)
	{
		return x / y;
	}
