#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int k;
    int x;

    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        x = rand() % 2;
        if (x == 1)
        {
            printf("Yazi , %d\n", x);
        }
        else if (x == 0)
        {
            printf("Tura , %d\n", x);
        }
    }

    return 0;
}