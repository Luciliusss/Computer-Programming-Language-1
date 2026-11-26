//  kullanici tarafindan girilen n tane sayinin ortalamasini ortalama isimli
//  bir fonksiyon yardimi ile yapan c programini kodlayiniz

#include <stdio.h>

float ortalama(int n);

int main(void)
{
    int n;

    printf("n = ");
    scanf("%d", &n);

    printf("Ortalama: %.2f\n", ortalama(n));

    return 0;
}

float ortalama(int n)
{
    float toplam = 0;
    float sayi;
    float ort;

    for (int i = 0; i < n; i++)
    {
        printf("%d. sayiyi giriniz: ", i + 1);
        scanf("%f", &sayi);
        toplam += sayi;
    }

    ort = toplam / n;
    return ort;
}