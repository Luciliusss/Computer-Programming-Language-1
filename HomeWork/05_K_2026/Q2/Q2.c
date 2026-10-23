#include <stdio.h>

int main()
{
    float vize[40];
    float final[40];

    for (int i = 0; i < 40; i++)
    {
        printf("%d. Vize notunu giriniz: ", i + 1);
        scanf("%f", &vize[i]);
        printf("%d. Final notunu giriniz: ", i + 1);
        scanf("%f", &final[i]);
    }

    float vizeToplam = 0;
    float finalToplam = 0;
    float vizeOrt;
    float finalOrt;

    for (int i = 0; i < 40; i++)
    {
        vizeToplam += vize[i];
    }

    vizeOrt = vizeToplam / 40;

    float vBfVizeToplam = 0; // vizeden büyük final notuna sahip olan öğrencilerin vize notları toplamı
    int n = 0;

    for (int i = 0; i < 40; i++)
    {
        if (final[i] > vizeOrt)
        {
            vBfVizeToplam += vize[i];
            n += 1;
        }
    }

    float vBfVizeToplamOrt;

    vBfVizeToplamOrt = vBfVizeToplam / n;

    printf("Vizeden notlarının ortalamasından büyük final notuna sahip öğrencilerin vize ortalamaları: %.2f ", vBfVizeToplamOrt);

    return 0;
}