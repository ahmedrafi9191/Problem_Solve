#include<stdio.h>
int main()
{
    double taka;
    int n100, n50 ,n20, n10, n5, n2, c1, c5, c25, c10, c005, c001, w_taka, w_coin;
    int a, b, coin;
    scanf("%lf", &taka);
    w_taka = taka;
    b = taka*100;
    coin = b%100;

    n100 = w_taka/100; w_taka = w_taka%100;
    n50 = w_taka/50; w_taka = w_taka%50;
    n20 = w_taka/20; w_taka = w_taka%20;
    n10 = w_taka/10; w_taka = w_taka%10;
    n5 = w_taka/5; w_taka = w_taka%5;
    n2 = w_taka/2; w_taka = w_taka%2;
    c1 = w_taka/1;

    c5 = coin/(0.50*100);
    w_coin = fmod(coin,(0.50*100));
    c25 = w_coin/(0.25*100);
    w_coin = fmod(w_coin,(0.25*100));
    c10 = w_coin/(0.10*100);
    w_coin = fmod(w_coin,(0.10*100));
    c005 = w_coin/(0.05*100);
    w_coin = fmod(w_coin,(0.05*100));
    c001 = w_coin/(0.01*100);


    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n", n100, n50);
    printf("%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n", n20, n10);
    printf("%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n", n5, n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n", c1, c5);
    printf("%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n", c25, c10);
    printf("%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", c005, c001);

    



return 0;
}
