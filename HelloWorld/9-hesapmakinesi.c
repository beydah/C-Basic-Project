#include <stdio.h>

//Basit Hesap Makinesi: 
//Kullanýcýdan iki sayý ve bir iþlem operatörü (+, -, *, /) girmesini isteyen bir program yazýn. 
//Program, girilen iþlemi gerçekleþtirerek sonucu ekranda göstermelidir.

int main()
{
	int num1, num2;
	char sembol;
	
	printf("-------------------------\n- C A L C U L A T H O R -\n-------------------------\n");
	
	printf(" Bilgi: \n Bu basit bir hesap makinesi yazilimidir.\n Eger sizden sayi girmesi istenirse lufen sadece sayi giriniz.\n");
	printf(" Kurallara uydugunuz icin tesekkur ederiz.\n -Ilkay Beydah Saglam \n\n");
	
	printf("Birinci Sayiyi Girin: ");
	scanf("%d",&num1);
	
	printf("Islem Girin ( + | - | * | / ): ");
	scanf("%s",&sembol);
	
	printf("Ikinci Sayiyi Girin: ");
	scanf("%d",&num2);
	
	if(sembol == '+' || sembol == '-' || sembol == '*' || sembol == '/')
	{
		if(sembol == '+')
		{
			num1 += num2;
		}
	
		else if(sembol == '-')
		{
			num1 -= num2;
		}
	
		else if(sembol == '*')
		{
			num1 *= num2;
		}
	
		else if(sembol == '/')
		{
			if(num1 != 0 && num2 != 0)
			{
				num1 /= num2;
			}
		}
		
		if(sembol == '/' && num1 == 0 || num2 == 0)
		{
			printf("Bu islemi yapmak istemiyorum.");
		}
		
		else
		{
			printf("Sonuc = %d",num1);	
		}
	}
	
	else
	{
		printf("Hatali Islem Girisi Yapildi");
	}
	
	return 0;
}
