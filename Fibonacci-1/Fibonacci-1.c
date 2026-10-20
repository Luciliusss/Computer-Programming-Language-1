#include <stdio.h>

int main()
{
    float x[1000];
    int k;

    x[1] = 2;
    x[2] = -1;
    x[3] = 1;

    printf("k=");
    scanf("%d", &k);

    for (int i = 4; i <= k; i++)
    {
        x[i] = 2 * x[i - 3] + x[i - 2] + x[i - 1];
    }

    printf("x[%d]=%.0f", k, x[k]);
}