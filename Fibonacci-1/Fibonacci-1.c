#include <stdio.h>

int main()
{

    // Fibonacci
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

// bilgisayar programlama 1 dersini alan 44 öğrencinin vize not
// ortalamasından küçük en büyük nota sahip olan öğrencinin vize notunu bulan c programını kodlanıyız
