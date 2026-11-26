//  kullanici tarafindan girilen n tane sayinin ortalamasini ortalama isimli
//  bir fonksiyon yardimi ile yapan c programini kodlayiniz

#include <stdio.h>

void ortalama(void);

int main(void)
{
    ortalama();
    return 0;
}

void ortalama()
{
    float toplam = 0;
    float sayi;
    float ort;

    int n;

    printf("n = ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d. sayiyi giriniz: ", i + 1);
        scanf("%f", &sayi);
        toplam += sayi;
    }

    ort = toplam / n;

    printf("Ortalama: %.2f\n", ort);
}