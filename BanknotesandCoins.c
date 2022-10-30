#include <stdio.h>

#include <math.h>

int main()

{
    double money, s ;

    int taka, coin ;

    scanf("%lf", &money );

    printf("NOTAS:\n");

    taka = money / 100;

    printf("%d nota(s) de R$ 100.00\n", taka );

    s = fmod ( money , 100 ) ;

    taka = s / 50;

    printf("%d nota(s) de R$ 50.00\n", taka );

    s = fmod( s , 50 );

    taka = s / 20;

    printf("%d nota(s) de R$ 20.00\n", taka );

    s = fmod( s , 20 );

    taka = s / 10;

    printf("%d nota(s) de R$ 10.00\n", taka );

    s = fmod( s , 10 );

    taka = s / 5;

    printf("%d nota(s) de R$ 5.00\n", taka );

    s = fmod( s , 5 );

    taka = s / 2;

    printf("%d nota(s) de R$ 2.00\n", taka );

    s = fmod( s , 2 );

    taka = s / 1;

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n", taka );

    s = fmod( s , 1 );

    coin = s / 0.50;

    printf("%d moeda(s) de R$ 0.50\n", coin );

    s = fmod( s , 0.50 );

    coin = s / 0.25;

    printf("%d moeda(s) de R$ 0.25\n", coin );

    s = fmod( s , 0.25 );

    coin = s / 0.10;

    printf("%d moeda(s) de R$ 0.10\n", coin );

    s = fmod( s , 0.10 );

    coin = s / 0.05;

    printf("%d moeda(s) de R$ 0.05\n", coin );

    s = fmod( s , 0.05 );

    coin = s / 0.01;

    printf("%d moeda(s) de R$ 0.01\n", coin );


    return 0;
}
