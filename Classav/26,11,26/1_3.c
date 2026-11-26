// k sayisinin faktoriyelini hesaplayan kod
// girdi cikti mainde
// islem fonksiyonda

#include <stdio.h>

int faktoriyel(int k);

int main(void)
{
    int k;
    printf("k sayisini giriniz: ");
    scanf("%d", &k);

    printf("%d! = %d\n", k, faktoriyel(k));
    return 0;
}

int faktoriyel(int k)
{
    int sonuc = 1;
    for (int i = 1; i <= k; i++)
    {
        sonuc *= i;
    }
    return sonuc;
}