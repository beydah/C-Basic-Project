#include <stdio.h>

int main()
{
	int num = 20;
	int* p = &num;
	
	printf("DATA: %d\n",num);
	printf("ADDRESS: %d\n\n",&num);
	
	printf("Pointer DATA: %d\n",p);
	printf("Pointer ADDRESS: %d\n",&p);
	printf("Pointer *DATA: %d\n\n",*p);
	
	printf("P+1 Pointer DATA: %d\n",++p);
	printf("P+1 Pointer *DATA: %d\n\n",*++p);
		
	return 0;
}
