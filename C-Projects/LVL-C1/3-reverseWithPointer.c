#include <stdio.h>

//prototype
void temp(int *p1, int *p2);

//main
int main()
{
	int num1 = 1, num2 = 2;
	printf("Start\nNum1: %d\nNum2: %d", num1, num2);
	
	reverse(&num1, &num2);
	printf("\n\nEnd\nNum1: %d\nNum2: %d", num1, num2);

	return 0;
}

//function
void reverse(int *p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	
	return 0;
}
