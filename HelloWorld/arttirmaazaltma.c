#include <stdio.h>

//Artt�rma ve Azaltma: 
//Kullan�c�dan bir say� girmesini isteyen bir program yaz�n ve bu say�y� artt�r�p azaltan i�lemleri ger�ekle�tirin. 
//Kullan�c�ya sonu�lar� ekranda g�sterin.

int main()
{
	int num, temp;
	
	printf("Bir Sayi Girin: ");
	scanf("%d", &num);
	
	temp = num;
	num -= 10;
	
	printf("%d - 10 = %d \n", temp, num);
	
	num = temp;
	num += 10;
	
	printf("%d + 10 = %d", temp, num);
}
