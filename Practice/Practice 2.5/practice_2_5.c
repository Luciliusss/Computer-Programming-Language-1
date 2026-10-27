#include <stdio.h>
#include <stdbool.h>

int getMax(int num1, int num2)
{

    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int main(void)
{

    int max = getMax(2, 3);

    printf("%d", max);

    return 0;
}
