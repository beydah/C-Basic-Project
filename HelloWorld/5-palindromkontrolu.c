#include <stdio.h>
#include <string.h>

//Palindrom Kontrolü: 
//Kullanıcıdan bir kelime veya cümle girmesini isteyen ve girilen metnin bir palindrom olup olmadığını kontrol eden bir program yazın. 
//Palindrom, tersten okunuşuyla da aynı olan kelimeler veya cümlelerdir.

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
