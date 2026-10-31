#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    // E(X) =np
    // VAR(X) = npq = np(1-p) Varyansı bul

    int k;
    int x;

    srand(time(NULL));
    int sayacT = 0;
    int sayacY = 0;

    int vTY[10000];

    float Toplam = 0;

    for (int i = 0; i < 10000; i++)
    {
        x = rand() % 2;
        if (x == 1)
        {
            // printf("Yazi , %d\n", x);
            vTY[i] = x;
            sayacY++;
        }

        else if (x == 0)
        {
            // printf("Tura , %d\n", x);
            vTY[i] = x;
            sayacT++;
        }
        Toplam += x;
    }

    int orT = Toplam / 10000;

    float varyans;

    for (int i = 0; i < 10000; i++)
    {
        varyans += ((vTY[i] - orT) * (vTY[i] - orT)) / 10000;
    }

    printf("Yazi sayisi : %d\n", sayacY);
    printf("Tura sayisi : %d\n", sayacT);
    printf("Varyans : %d\n", varyans);

    return 0;
}