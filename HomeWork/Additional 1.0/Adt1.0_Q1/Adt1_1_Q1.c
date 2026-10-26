#include <stdio.h>

int main(void)
{
    double x[10000];

    x[1] = 1;
    x[2] = 2;
    x[3] = 3;

    int k = 0;

    printf("k = (>3): ");
    scanf("%d", &k);

    double toplam = 0;

    for (int i = 0; i < k - 3; i++)
    {
        x[i + 4] = (2 * x[i + 3]) + x[i + 2] - x[i + 1];
        toplam += x[i + 4];
    }

    toplam = toplam + (x[1] + x[2] + x[3]);
    printf("x[k]: %.2lf\n", x[k]);
    printf("Toplam : %.2lf", toplam);

    return 0;
}