#include <stdio.h>

void buyuk(int byk);

int main(void)
{
    int a;
    int b;

    printf("1. sayi: ");
    scanf("%d", &a);

    printf("2. sayi: ");
    scanf("%d", &b);

    int byk;

    if (a > b)
    {
        byk = a;
    }
    else
    {
        byk = b;
    }

    buyuk(byk);
}

void buyuk(int byk)
{
    printf("buyuk sayi: %d\n", byk);
}