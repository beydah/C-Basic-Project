#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Say� Tahmin Oyunu: 
//Bilgisayar�n rastgele bir say� tuttu�u ve kullan�c�n�n bu say�y� tahmin etmeye �al��t��� bir oyun yaz�n. 
//Program, kullan�c�ya tahminin do�ru, y�ksek veya d���k oldu�unu s�yleyerek ipu�lar� vermelidir.

int main()
{
	srand(time(NULL));
	int randomSayi = rand() % 100 + 1;
	
	int tahmin;
	int i = 1;
	
	printf("Aklimda 1 - 100 Arasi Rastgele Bir Sayi Tuttum.\n");
	
	do
	{
		printf("%d. Tahminini Gir: ",i);
		scanf("%d",&tahmin);
		
		if(tahmin == randomSayi)
		{
			printf("Tebrikler! %d. Tahminde Buldunuz.\n", i);
		}
		
		else if(tahmin < randomSayi)
		{
			printf("Daha Buyuk Tahmin Girin.\n");
		}
		
		else
		{
			printf("Daha Kucuk Tahmin Girin.\n");
		}
		
		i++;
	}
	while(tahmin != randomSayi);
	
	return 0;
}
