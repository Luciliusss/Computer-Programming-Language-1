#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int k;
    int x;

    srand(time(NULL));
    srand(67);

    for (int i = 0; i < 10; i++)
    {
        x = rand() % 2;
        printf("%d \n", x);
    }

    return 0;
}