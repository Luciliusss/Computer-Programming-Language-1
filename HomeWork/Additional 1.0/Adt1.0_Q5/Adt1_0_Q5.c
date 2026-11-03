#include <stdio.h>
#include <math.h>

int main()
{

    int n;
    float xi[1000];
    float yi[1000];

    float xi_Toplam = 0;
    float yi_Toplam = 0;
    float xiTyi_Toplam = 0;

    printf("Enter (n): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter x[%d]: ", i);
        scanf("%f", &xi[i]);

        printf("Enter y[%d]: ", i);
        scanf("%f", &yi[i]);

        xi_Toplam += xi[i];
        yi_Toplam += yi[i];
        xiTyi_Toplam += xi[i] * yi[i];
    }

    float xi_Ort = xi_Toplam / n;
    float yi_Ort = yi_Toplam / n;

    float farkKareToplam = 0; // (xi -x)^2 lerin toplamı

    for (int i = 0; i < n; i++)
    {
        // farkKareToplam += ((xi[i] - xi_Ort) * (xi[i] - xi_Ort)) * ((yi[i] - yi_Ort) * (yi[i] - yi_Ort));
        farkKareToplam += (pow(xi[i] - xi_Ort, 2)) * (pow((yi[i] - yi_Ort), 2));
    }

    float sonuc = pow(farkKareToplam, 0.5) / pow(xiTyi_Toplam - (xi_Toplam * yi_Toplam), 2);

    printf("%f", sonuc);
}