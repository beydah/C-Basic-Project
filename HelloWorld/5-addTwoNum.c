#include <stdio.h>

/*
Level 1 Program to add two numbers.
*/

int main()
{
	int num1, num2;
	
	printf("Enter 1. Number: ");
	scanf("%d",&num1);
	
	printf("Enter 2. Number: ");
	scanf("%d",&num2);
	
	num1 += num2;
	printf("Total is: %d",num1);
	
	return 0;
}
