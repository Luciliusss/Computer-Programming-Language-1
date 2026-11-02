#include <stdio.h>

int main(void)
{

    // SORU 3

    int n;
    float x[1000];

    printf("Değer giriniz (n): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d. Sayıyı giriniz: ", i + 1);
        scanf("%f", &x[i]);
    }

    float toplam = 0;
    float medyan;

    float y[1000];

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (x[i] > x[j])
            {
                y[i] = x[i];
                x[i] = x[j];
                x[j] = y[i];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%.2f\n", x[i]);
    }

    for (int i = 0; i < n; i++)
    {
        toplam = toplam + x[i];
    }

    if (n % 2 == 1)
    {
        medyan = x[n / 2];
    }
    else
    {
        medyan = (x[n / 2] + x[n / 2 - 1]) / 2;
    }

    float enK = x[0];
    float enB = x[n - 1];
    float ort = toplam / n;

    printf("En küçük: %.2f\n", enK);
    printf("En büyük: %.2f\n", enB);
    printf("Ortalama: %.2f\n", ort);
    printf("Toplam : %.2f\n", toplam);
    printf("Medyan: %.2f", medyan);

    return 0;
}