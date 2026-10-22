#include <stdio.h>

// bilgisayar programlama 1 dersini alan 44 öğrencinin vize not
// ortalamasından küçük en büyük nota sahip olan öğrencinin vize notunu bulan c programını kodlayınız

int main()
{
    float Notes[11];
    float Sum = 0;
    float max;
    float avg;

    for (int i = 1; i <= 10; i++)
    {
        printf("Vize[%d]=", i);
        scanf("%f", &Notes[i]);

        Sum = Sum + Notes[i];
    }

    avg = Sum / 10;

    printf("avg= %.2f\n", avg);

    float maxBelowAvg_1 = 0.1;

    for (int j = 1; j <= 10; j++)
    {
        if (Notes[j] < avg && Notes[j] > maxBelowAvg_1)
        {
            maxBelowAvg_1 = Notes[j];
        }
    }

    if (maxBelowAvg_1 == 0.1)
        printf("No note is less than the average.\n");
    else
        printf("maxBelowAvg_1= %.2f\n", maxBelowAvg_1);

    /* çözüm yöntemi ek-1 : ortalamayı bul, ortalamadan küçük olan bütün
    değerleri bir index'e ata ve o indexdeki en büyüğü bul*/

    float alt[10];
    int k = 0;

    for (int i = 0; i < 10; i++)
    {
        if (Notes[k] < avg)
        {
            k = k + 1;
            alt[k] = Notes[k];
        }
    }

    max = alt[1];

    for (int i = 2; i < k; i++)
    {
        if (alt[i] > max)
        {
            max = alt[i];
        }
    }

    printf("maxBelowAvg_2= %.2f\n", max);
}