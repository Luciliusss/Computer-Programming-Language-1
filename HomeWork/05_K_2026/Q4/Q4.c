#include <stdio.h>

int main()
{

    int n = 1000;
    int x = 0;
    int asal[10];

    while (x < 10)
    {
        int asalMi = 1;

        for (int j = 2; j < n; j++)
        {
            if (n % j == 0)
            {
                asalMi = 0;
                break;
            }
        }

        if (asalMi == 1)
        {
            asal[x] = n;
            x++;
        }
        n++;
    }

    int asalToplam = 0;
    int asalOrt = 0;
    for (int i = 0; i < 10; i++)
    {
        asalToplam = asalToplam + asal[i];
    }
    asalOrt = asalToplam / 10;

    printf("1000den büyük ilk 10 asal sayının ortalaması: %d", asalOrt);

    return 0;
}