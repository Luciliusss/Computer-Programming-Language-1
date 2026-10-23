#include <stdio.h>

int main()
{

    // 𝑥[1] = 1, 𝑥[2] = 1 ve 𝑥[𝑛] = 3𝑥[𝑛 − 1] − 𝑥[𝑛 − 2] olmak üzere 𝑥[𝑘] =?
    // İşleminin sonucunu bulan Dev - C++ programını kodlayınız(20 Puan).

    float x[1000];
    int k = 0;

    printf("Deger giriniz: ");
    scanf("%d", &k);

    x[1] = 1;
    x[2] = 1;

    for (int i = 3; i <= k; i++)
    {
        x[i] = 3 * x[i - 1] - x[i - 2];
    }

    printf("x[%d] = %.f", k, x[k]);

    return 0;
}