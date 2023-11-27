#include <stdio.h>

//Level 3 A program that calculates the power of a given number.

int main ()
{
	int base, exp;
	long long result = 1;
	
	printf("Enter the base number: ");
	scanf("%d", &base);

	printf("Enter the exponent: ");
	scanf("%d", &exp);

	while (exp != 0)
	{
  	 	result *= base;
  	 	exp--;
	}
	
	printf("Result: %lld\n", result);
	
	return 0;
}
