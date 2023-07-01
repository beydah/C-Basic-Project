#include <stdio.h>
#include <string.h>

//Palindrom Kontrol�: 
//Kullan�c�dan bir kelime veya c�mle girmesini isteyen ve girilen metnin bir palindrom olup olmad���n� kontrol eden bir program yaz�n. 
//Palindrom, tersten okunu�uyla da ayn� olan kelimeler veya c�mlelerdir.

int main()
{
	char metin[100];
	int i, j;
	int isPalindrom = 1;
	
	printf("Bir kelime girin: ");
	scanf("%s", metin);
	
	for (i = 0, j = strlen(metin) - 1; i < j; i++, j--)
	{
		if (metin[i] != metin[j])
		{
			isPalindrom = 0;
			break;
		}
	}
	
	if(isPalindrom)
	{
		printf("Girilen kelime bir palindromdur. \n");
	}
	
	else
	{
		printf("Girilen kelime bir palindrom degildir. \n");
	}
	
	return 0;
}
