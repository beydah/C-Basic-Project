#include <stdio.h>

//Çarpým Tablosu

int main()
{
	int i, j, sonuc;
	
	for(i = 1; i <= 10; i++)
	{
		for(j = 1; j <= 10; j++)
		{
			sonuc = i * j;
			printf("%d X %d = %d\n", i, j, sonuc);
		}
		
		printf("\n");
	}
	
	return 0;
}
