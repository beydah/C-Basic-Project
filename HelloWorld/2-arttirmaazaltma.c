#include <stdio.h>

//Arttırma ve Azaltma: 
//Kullanıcıdan bir sayı girmesini isteyen bir program yazın ve bu sayıyı arttırıp azaltan işlemleri gerçekleştirin. 
//Kullanıcıya sonuçları ekranda gösterin.

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
