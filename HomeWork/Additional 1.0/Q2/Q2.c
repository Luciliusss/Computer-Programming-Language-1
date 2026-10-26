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
        scanf("%d", &vize[i + 1]);
        printf("Vize [%d]: ", i + 1);
        scanf("%d", &final[i + 1]);

        gecme[i + 1] = (vize[i + 1] * (40 / 100)) + (final[i + 1] * (60 / 100));
        gecmeToplam += gecme[i + 1];
    }

    float gecmeOrt = gecmeToplam / 40;

    float gecmedenBFinal[41];
    float gecmeToplam = 0;
    float gecmeOrt = 0;
    int sayac = 0; // gecmeden buyuk finalleri atamak icin kullanilan sayac

    for (int i = 0; i < 40; i++)
    {
        if (final[i + 1] > gecmeOrt && vize[i + 1] > 50)
        {
            sayac++;
            gecmeToplam += gecme[i + 1];
        }
    }

    gecmeOrt = gecmeToplam / sayac;

    printf("Şartları sağlayan öğrenci sayısı : %d", sayac);
    printf("Şartları sağlayan öğrencilerin geçme notu ortalaması : %.2f", gecmeOrt);

    return 0;
}
