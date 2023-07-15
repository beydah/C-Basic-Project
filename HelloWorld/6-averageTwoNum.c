#include <stdio.h>

/*
Level 1 Program to find the average of two numbers.
*/

int main()
{
	int num1, num2;
	
	printf("Enter 1. Number: ");
	scanf("%d",&num1);
	
	printf("Enter 2. Number: ");
	scanf("%d",&num2);
	
	float average = (num1 + num2) / 2.0;
	
	printf("Average is: %.2f",average);
	
	return 0;
}
