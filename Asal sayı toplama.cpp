#include <stdio.h>
#include <conio.h>
#include <locale.h>
                   //By:Kayra Yer\\
int main() 
{
    
    setlocale(LC_ALL, "Turkish"); 

    int sayi1, sayi2;
    int i, j;
    int toplam = 0;
    int asal_mi;
    int temp;

    
    printf("Birinci sayıyı giriniz: ");
    scanf("%d", &sayi1);

    printf("İkinci sayıyı giriniz: ");
    scanf("%d", &sayi2);

    if (sayi1 > sayi2) 
	{
        temp = sayi1;
        sayi1 = sayi2;
        sayi2 = temp;
    }

    printf("\n%d ve %d arasındaki asal sayılar: ", sayi1, sayi2);

    for (i = sayi1; i <= sayi2; i++) 
	{

        asal_mi = 1;

        
        if (i <= 1) 
		{
        asal_mi = 0;
        
        } 
        
        for (j = 2; j < i; j++) 
		{
            
       
        if (i % j == 0) {
            asal_mi = 0;
            break;
            }
        }

        if (asal_mi == 1) 
		{
            printf("%d ", i);
            toplam = toplam + i;
        }
    }
    printf("\n\nBu aralıktaki asal sayıların toplamı: %d\n", toplam);
    getch();
	}


