#include <stdio.h>

//Üçgen Alan Hesaplama: 
//Kullanıcıdan üçgenin taban uzunluğunu ve yüksekliğini alarak üçgenin alanını hesaplayan bir program yazın. 
//Formül: Alan = (Taban * Yükseklik) / 2

int main()
{
	float taban, yuksek, alan;
	
	do
	{
		printf("Ucgenin Taban Uzunlugunu Girin: ");
		scanf("%f", &taban);
		
		if(taban < 1)
		{
			printf("Lutfen Gecerli Bir Uzunluk Girin \n");
		}
	}
	while(taban < 1);

	do
	{
		printf("Ucgenin Yuksekligini Girin: ");
		scanf("%f", &yuksek);
		
		if(yuksek < 1)
		{
			printf("Lutfen Gecerli Bir Yukseklik Girin \n");
		}
	}
	while(yuksek < 1);

	alan = (taban * yuksek) / 2;
	
	printf("Ucgenin Alani = %.2f", alan);
}
