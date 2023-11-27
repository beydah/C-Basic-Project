#include <stdio.h>

//Level 2 A program that determines the number of digits in a given number.			

int main()
{
	int number, count = 0;
	
	printf("Enter a number: ");
	scanf("%d", &number);

    while (number != 0)
    {
       	number /= 10;
       	count++;
    }

	printf("Number of digits: %d\n", count);

	return 0;
}
