#include <stdio.h>

int main(void)
{
    float Xi[100];
    float Yi[100];
    int n;

    printf("Enter (n): ");
    scanf("%d", &n);

    // xi & yi değerlerinin indekslere atanması
    for (int i = 1; i <= n; i++)
    {
        printf("Enter x[%d]: ", i);
        scanf("%f", &Xi[i - 1]);
        printf("Enter y[%d]: ", i);
        scanf("%f", &Yi[i - 1]);
    }

    float XiToplam = 0;
    float YiToplam = 0;
    float XiKareToplam = 0;

    for (int i = 0; i < n; i++)
    {
        XiToplam += Xi[i];
        YiToplam += Yi[i];             // Denklemin bölüm kısımında Altta kalan toplamın sonucu
        XiKareToplam += Xi[i] * Xi[i]; // Denklemin bölüm kısımında Üstte kalan toplamın sonucu
    }

    // Denklemin 1. parçasının sonucu i=1'den n'e kadar xi'lerin toplamının karesi
    float XiToplamKare = XiToplam * XiToplam;
    // Sonucun hesaplanması
    float sonuc = (XiToplamKare) - (XiKareToplam / YiToplam);

    printf("Sonuc : %.4f", sonuc);

    return 0;
}