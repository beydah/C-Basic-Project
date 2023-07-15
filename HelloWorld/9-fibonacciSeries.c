#include <stdio.h>

/*
Level 1 Program to generate the Fibonacci series within a specified range.
*/

int main()
{
    int i, sum, fibo1 = 1, fibo2 = 0;
	
	printf("%d\n",fibo1);
    for(i = 1; i < 15; i++)
    {
    	sum = fibo1 + fibo2;
    	fibo2 = fibo1;
    	fibo1 = sum;
    	printf("%d\n",sum);
	}
	
    return 0;
}
