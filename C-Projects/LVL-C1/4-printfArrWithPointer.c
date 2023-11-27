#include <stdio.h>

//Print Arr with Pointer & Void Func

void printArr(int *p)
{
	while(*p != '\0')
	{
		printf("%d\n",*p);
		p++;	
	}
	
	return 0;
}

int main()
{
	int Arr[] = {1,2,3,4,5};
	
	printArr(&Arr[0]);
	
	return 0;
}
