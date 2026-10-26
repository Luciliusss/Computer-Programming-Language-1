#include <stdio.h>

int main()
{

    // sayı sıralama
    int x[6];
    for (int i = 1; i <= 5; i++)
    {
        printf("x[%d]=", i);
        scanf("%d", &x[i]);
    }

    for (int i = 1; i <= 4; i++)
    {
        for (int j = i + 1; j <= 5; j++)
        {
            if (x[i] > x[j])
            {
                int k = x[i];
                x[i] = x[j];
                x[j] = k;
            }
        }
    }

    for (int i = 1; i <= 5; i++)
    {
        printf("x[%d]=%d\n", i, x[i]);
    }
}
