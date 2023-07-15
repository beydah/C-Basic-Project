#include <stdio.h>

/*
Level 1 Check if the entered number is odd or even.
*/

int main()
{
	int num;
	
	printf("Enter a Number: ");
	scanf("%d",&num);
	
	if(num % 2 == 0)
	{
		printf("Number is Even.");
	}
	
	else
	{
		printf("Number is Odd.");
	}
	
	return 0;
}
