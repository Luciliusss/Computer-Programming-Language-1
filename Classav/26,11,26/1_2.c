toplama islemi mainde + opt yok

#include <stdio.h>

    int toplam(int n);

int main(void)
{
    int n;

    printf("n = ");
    scanf("%d", &n);

    printf("Toplam: %d\n", toplam(n));

    return 0;
}

int toplam(int n)
{
    int toplam = 0;
    int sayi;

    for (int i = 0; i < n; i++)
    {
        printf("%d. sayiyi giriniz: ", i + 1);
        scanf("%d", &sayi);
        toplam += sayi;
    }

    return toplam;
}