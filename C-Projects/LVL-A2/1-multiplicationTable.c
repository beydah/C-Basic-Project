#include <stdio.h>

//Level 2 A program that generates a multiplication table using loops.

int main()
{
	int i, j, result;
	
	for(i = 1; i <= 10; i++)
	{
		for(j = 1; j <= 10; j++)
		{
			result = i * j;
			printf("%d X %d = %d\n", i, j, result);
		}
		
		printf("\n");
	}
	
	return 0;
}
