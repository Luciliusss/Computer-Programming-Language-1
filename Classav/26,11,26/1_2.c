// toplama islemi mainde + opt yok

#include <stdio.h>

int topla(int toplam, int sayi);

int main(void)
{
    int n;

    printf("n = ");
    scanf("%d", &n);

    float sayi;
    float toplam = 0;
    float sonuc = 0;

    for (int i = 0; i < n; i++)
    {
        printf("%d. sayiyi giriniz: ", i + 1);
        scanf("%f", &sayi);
        sonuc = topla(sonuc, sayi);
    }

    printf("Toplam: %f  \n", sonuc);

    return 0;
}

int topla(int toplam, int sayi)
{
    return toplam + sayi;
}