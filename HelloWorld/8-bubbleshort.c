#include <stdio.h>

//Bubble Sort (Kabarc�k S�ralama) Algoritmas�: 
//Bubble sort algoritmas�n� kullanarak bir dizi eleman�n� s�ralayan bir program yaz�n. 
//Kullan�c�dan dizinin elemanlar�n� girmesini isteyin ve program, s�ralanm�� diziyi ekranda g�stermelidir.

int main()
{
	int elemanSayisi, i, j, temp;
	
	printf("Matrisin Eleman Sayisini Gir: ");
	scanf("%d",&elemanSayisi);
	
	int matris[elemanSayisi];
	
	for(i = 0; i < elemanSayisi; i++)
	{
		printf("%d. Elemani Gir: ", i+1);
		scanf("%d",&matris[i]);
	}
	
	/*BUBBLE SORT*/
	for(i = 0; i < elemanSayisi; i++)
	{
		for(j = 0; j < elemanSayisi - 1; j++)
		{
			if(matris[j] > matris[j+1])
			{
				temp = matris[j];
				matris[j] = matris[j+1];
				matris[j+1] = temp;
			}
		}
	}
	
	printf("Matrisin Sirali Hali: \n");
	
	for(i = 0; i < elemanSayisi; i++)
	{
		printf("%d\n",matris[i]);
	}
	
	return 0;
}
