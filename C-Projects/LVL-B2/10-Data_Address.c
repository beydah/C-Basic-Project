#include <stdio.h>

int main()
{
	int num1 = 10;
	int num2 = 20;
	double num3 = 10.25;
	char char1 = 'a';
	
	printf("\nDATAS\n");
	printf("num1: %d\n",num1);
	printf("num2: %d\n",num2);
	printf("num3: %f\n",num3);
	printf("char1: %c\n",char1);
	        
	printf("\nADDRESS\n");
	printf("num1: %d\n",&num1);
	printf("num2: %d\n",&num2);
	printf("num3: %d\n",&num3);
	printf("char1: %d\n",&char1);
	
	return 0;
}
