#include <stdio.h>

int buyuk(int a, int b);

int main(void)
{
    int a;
    int b;

    printf("1. sayi: ");
    scanf("%d", &a);

    printf("2. sayi: ");
    scanf("%d", &b);

    printf("buyuk sayi: %d\n", buyuk(a, b));
    return 0;
}

int buyuk(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}