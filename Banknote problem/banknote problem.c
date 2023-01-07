#include<stdio.h>
int main()
{
    int note, extra, extra_50, extra_20, extra_10, extra_5, extra_2, extra_1;
    scanf("%d", &note);
    extra = note%100;
    extra_50 = extra%50;
    extra_20 = extra_50%20;
    extra_10 = extra_20%10;
    extra_5 = extra_10%5;
    extra_2 = extra_5%2;
    extra_1 = extra_2%1;
    printf("%d\n", note);
    printf("%d nota(s) de R$ 100,00\n", note/100);
    printf("%d nota(s) de R$ 50,00\n", extra/50);
    printf("%d nota(s) de R$ 20,00\n", extra_50/20);
    printf("%d nota(s) de R$ 10,00\n", extra_20/10);
    printf("%d nota(s) de R$ 5,00\n", extra_10/5);
    printf("%d nota(s) de R$ 2,00\n", extra_5/2);
    printf("%d nota(s) de R$ 1,00\n", extra_2/1);
    return 0;
}