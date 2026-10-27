#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int k;
    int x;

    srand(time(NULL));
    int sayacT = 0;
    int sayacY = 0;

    for (int i = 0; i < 10000; i++)
    {
        x = rand() % 2;
        if (x == 1)
        {
            // printf("Yazi , %d\n", x);
            sayacY++;
        }
        else if (x == 0)
        {
            // printf("Tura , %d\n", x);
            sayacT++;
        }
    }

    printf("Yazi sayisi : %d\n", sayacY);
    printf("Tura sayisi : %d\n", sayacT);

    return 0;
}