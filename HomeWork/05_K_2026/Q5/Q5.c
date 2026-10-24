#include <stdio.h>
#include <math.h>

int main()
{
    float Xi[100];
    float Yi[100];
    int n;

    // gözlem sayısının atanması
    printf("Enter (n): ");
    scanf("%d", &n);

    // Xi ve Yi değerlerinin indenkslere atanması
    for (int i = 0; i < n; i++)
    {
        printf("x[%d]: ", i + 1);
        scanf("%f", &Xi[i]);
        printf("y[%d]: ", i + 1);
        scanf("%f", &Yi[i]);
    }

    float XiToplam = 0;
    float YiToplam = 0;
    float Xi_YiToplam = 0;
    float XiKareToplam = 0;

    for (int i = 0; i < n; i++)
    {
        XiToplam += Xi[i];             // Xi'lerin toplamı
        YiToplam += Yi[i];             // Yi'lerin toplamı
        Xi_YiToplam += Xi[i] * Yi[i];  // xi*yi'lerin toplamı
        XiKareToplam += Xi[i] * Xi[i]; // xi^2'nin toplamı
    }

    float XiToplamKare = XiToplam * XiToplam; // Xi'lerin toplamının karesi
    float YiOrtalama = YiToplam / n;          // Yi'lerin aritmetik ortalaması
    float XiOrtalama = XiToplam / n;          // Xi'lerin aritmetik ortalaması

    float SapmaKareXi = 0;
    float SapmaKareYi = 0;

    for (int i = 0; i < n; i++)
    {
        SapmaKareYi += (Yi[i] - YiOrtalama) * (Yi[i] - YiOrtalama); // Yi için sapmaların kareleri toplamı
        SapmaKareXi += (Xi[i] - XiOrtalama) * (Xi[i] - XiOrtalama); // Xi için sapmaların kareleri toplamı
    }

    float sonuc = ((Xi_YiToplam) - (((XiToplam) * (YiToplam)) / n)) / // basit doğrusal regresyonun hesaplanması
                  ((XiKareToplam) - ((XiToplamKare) / n)) / (sqrt((SapmaKareYi) / ((n - 2) * (SapmaKareXi))));

    printf("Sonuc: %.4f", sonuc); // sonucun yazılması

    return 0;
}