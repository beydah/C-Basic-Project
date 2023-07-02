#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Sayý Tahmin Oyunu: 
//Bilgisayarýn rastgele bir sayý tuttuðu ve kullanýcýnýn bu sayýyý tahmin etmeye çalýþtýðý bir oyun yazýn. 
//Program, kullanýcýya tahminin doðru, yüksek veya düþük olduðunu söyleyerek ipuçlarý vermelidir.

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
