#include <stdio.h>

//Faktöriyel Hesaplama: 
//Kullanýcýdan bir sayý girmesini isteyen ve girilen sayýnýn faktöriyelini hesaplayan bir program yazýn. 
//Örneðin, 5 girildiðinde program 5! = 5 * 4 * 3 * 2 * 1 = 120 sonucunu vermelidir.

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
