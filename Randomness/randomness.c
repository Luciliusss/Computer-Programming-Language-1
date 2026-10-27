#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int k;
    int x;

    srand(67);

    for (int i = 0; i < 10; i++)
    {
        x = rand() % 2;
        printf("%d \n", x);
    }

    return 0;
}