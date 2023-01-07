#include<stdio.h>
#include<math.h>
int main()
{
    int a, b;
    double modula;
    scanf("%d%d", &a, &b);
    modula = a % b;
    printf("%.3lf", modula);


    return 0;
}