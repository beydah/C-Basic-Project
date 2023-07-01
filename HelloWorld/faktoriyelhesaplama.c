#include <stdio.h>

//Fakt�riyel Hesaplama: 
//Kullan�c�dan bir say� girmesini isteyen ve girilen say�n�n fakt�riyelini hesaplayan bir program yaz�n. 
//�rne�in, 5 girildi�inde program 5! = 5 * 4 * 3 * 2 * 1 = 120 sonucunu vermelidir.

int main()
{
	int i, num;
	int fakt = 1;
	
	do
	{
		printf("Faktoriyeli Hesaplanacak Sayiyi Gir: ");
		scanf("%d", &num);
		
		if(num < 0 || num > 30)
		{
			printf("Lutfen Gecerli Bir Sayi Giriniz. \n");
		}
	}
	while(num < 0 || num > 30);
	
	for(i = num; i > 0; i--)
	{
		fakt *= i;
	}
	
	printf("%d! = %d", num, fakt);
	
	return 0;
}
