#include <stdio.h>

//Arttýrma ve Azaltma: 
//Kullanýcýdan bir sayý girmesini isteyen bir program yazýn ve bu sayýyý arttýrýp azaltan iþlemleri gerçekleþtirin. 
//Kullanýcýya sonuçlarý ekranda gösterin.

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
