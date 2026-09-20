#include <stdio.h>
#include <stdlib.h>
//Function declaration,
int findLargest(int a, int b, int c);

int main() 
{
	int firstNumber, secondNumber, thirdNumber ;
	int largest;
	printf("Enter firstNumber: ");
	scanf("%d" , &firstNumber);
	
	printf("Enter secondNumber: ");
	scanf("%d" , &secondNumber);
	
	printf("Enter thirdNumber: ");
	scanf("%d" , &thirdNumber);
	
	//Function call
    largest = findLargest(firstNumber, secondNumber, thirdNumber);
	printf("Largest Number = %d\n" , largest);
	
	return 0;
}
//Function definition
int findLargest(int a, int b, int c)
{
	int largest;
	largest = a;
	if (b > largest)
	{
		largest = b;
	}
	if (c > largest)
	{
		largest = c;
	}
	return largest;
}
