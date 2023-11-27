#include <stdio.h>

/*
Level 1 Program to find the sum of N natural numbers.
*/

int main()
{
    int num, sum = 0, i, n;
	
    printf("How many numbers to add: ");
    scanf("%d", &n);
	
    for(i = 0; i < n; i++)
    {
        printf("Enter %d. Number: ", i+1);
        scanf("%d", &num);
		
        sum += num;
    }
	
    printf("Sum is: %d", sum);
	
    return 0;
}
