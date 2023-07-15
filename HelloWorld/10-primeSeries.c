#include <stdio.h>

/*
Level 1 Program to find prime numbers within a specified range.
*/

int main()
{
    int i, j, isPrime;
    
    for(i = 2; i < 100; i++)
    {
    	isPrime = 1;
    	
    	for( j= 2; j < i; j++)
    	{
    		if(i % j == 0)
    		{
    			isPrime = 0;
    			break;
			}
		}
		
		if(isPrime == 1)
		{
			printf("%d\n",i);
		}
	}
    
    return 0;
}
