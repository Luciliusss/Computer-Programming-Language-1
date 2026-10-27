#include <stdio.h>

int main(void)
{
    float vize[41];
    float final[41];
    float gecme[41];
    float gecmeToplam = 0;

    for (int i = 0; i < 40; i++)
    {
        printf("Vize [%d]: ", i + 1);
        scanf("%f", &vize[i + 1]);
        printf("Final [%d]: ", i + 1);
        scanf("%f", &final[i + 1]);

        gecme[i + 1] = (vize[i + 1] * 0.4f) + (final[i + 1] * 0.6f);
        gecmeToplam += gecme[i + 1];
    }

    float gecmeOrt = gecmeToplam / 40;

    float gecmeFinalToplam = 0;
    int sayac = 0; // gecmeden buyuk finalleri atamak icin kullanılan sayac

    for (int i = 0; i < 40; i++)
    {
        if (final[i + 1] > gecmeOrt && vize[i + 1] >= 50)
        {
            sayac++;
            gecmeFinalToplam += gecme[i + 1];
        }
    }

    float gecmeBOrtFinal = gecmeFinalToplam / sayac;

    printf("Şartları sağlayan öğrenci sayısı : %d,\n", sayac);
    printf("Şartları sağlayan öğrencilerin geçme notu ortalaması : %.2f", gecmeBOrtFinal);

        return 0;
}
