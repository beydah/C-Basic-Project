#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHARS 1000

void metinYazma()
{
    char dosyaAdi[50];
    char metin[MAX_CHARS];
    
    printf("Metin Girin: ");
    getchar();
    fgets(metin, MAX_CHARS, stdin);
    
    printf("Dosya Adi Girin: ");
    scanf("%s", dosyaAdi);
    
    strcat(dosyaAdi, ".txt");
    
    FILE* file = fopen(dosyaAdi, "w");
    if (file == NULL)
    {
        printf("Dosya Olusturma Hatasi\n");
        return;
    }
    
    fputs(metin, file);
    fclose(file);
    printf("Metin %s Dosyasina Kaydedildi.\n", dosyaAdi);
}

void metinOkuma()
{
    char dosyaAdi[50];
    
    printf("Okunacak Dosya Adini Girin: ");
    scanf("%s", dosyaAdi);
    
    FILE* file = fopen(dosyaAdi, "r");
    if (file == NULL)
    {
        printf("Dosya Acma Hatasi!\n");
        return;
    }
    
    printf("----- Dosya Icerigi -----\n");
    char ch;
    while ((ch = fgetc(file)) != EOF)
    {
        printf("%c", ch);
    }
    
    fclose(file);
}

void metinDuzenleme()
{
    char dosyaAdi[50];
    char metin[MAX_CHARS];
    
    printf("Duzenlenecek dosya adini girin: ");
    scanf("%s", dosyaAdi);
    
    FILE* file = fopen(dosyaAdi, "a+");
    if (file == NULL)
    {
        printf("Dosya Acma Hatasi!\n");
        return;
    }
    
    printf("Duzenlenecek Metni Girin: ");
    getchar();
    fgets(metin, MAX_CHARS, stdin);
    
    fputs(metin, file);
    fclose(file);
    printf("Metin %s dosyasina eklendi.\n", dosyaAdi);
}

void metinSilme()
{
    char dosyaAdi[50];
    
    printf("Silinecek Dosya Adini Girin: ");
    scanf("%s", dosyaAdi);
    
    if (remove(dosyaAdi) == 0)
    {
        printf("%s dosyasi basariyla silindi.\n", dosyaAdi);
    }
    else
    {
        printf("Dosya Silme Hatasi!\n");
    }
}

int main()
{
    while (1)
    {
        int secim;
        
        printf(" ---------------------------\n - M E T I N E D I T O R -\n ---------------------------\n\n");
        printf(" 1. Metin Yazma\n 2. Metin Okuma\n 3. Metin Duzenleme\n 4. Metin Silme\n 5. Cikis\n\n");
        printf(" Seciminizi Yapin: ");
        scanf("%d", &secim);
        
        switch (secim)
        {
            case 1:
                metinYazma();
                break;
                
            case 2:
                metinOkuma();
                break;
            
            case 3:
                metinDuzenleme();
                break;
            
            case 4:
                metinSilme();
                break;
                
            case 5:
                printf("Cikis Yapiliyor...\n");
                return 0;
                
            default:
                printf("Gecersiz Secim!\n");
                break;
        }
    }
    
    return 0;
}

