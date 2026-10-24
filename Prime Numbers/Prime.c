#include <stdio.h>
#include <time.h>

int main()
{
    int n;
    int asalMi;
    int asalSayisi = 0;

    printf("Ust siniri giriniz: ");
    scanf("%d", &n);

    clock_t baslangic = clock();

    for (int i = 2; i <= n; i++)
    {
        asalMi = 1;

        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                asalMi = 0;
                break;
            }
        }

        if (asalMi == 1)
        {
            printf("%d ", i);
            asalSayisi++;
        }
    }

    clock_t bitis = clock();

    double sure = (double)(bitis - baslangic) / CLOCKS_PER_SEC;

    printf("\n\nBulunan asal sayi adedi: %d\n", asalSayisi);
    printf("Hesaplama suresi: %.6f saniye\n", sure);

    return 0;
}
