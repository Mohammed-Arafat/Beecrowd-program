#include <stdio.h>

#include <math.h>

int main()


{
    int money, s ;

    scanf("%d", &money );

    printf("%d\n", money );

    printf("%d nota(s) de R$ 100,00\n", money / 100 );

    s = fmod( money , 100 );

    printf("%d nota(s) de R$ 50,00\n", s / 50 );

    s = fmod( s , 50 );

    printf("%d nota(s) de R$ 20,00\n", s / 20 );

    s = fmod( s , 20 );

    printf("%d nota(s) de R$ 10,00\n", s / 10 );

    s = fmod( s , 10 );

    printf("%d nota(s) de R$ 5,00\n", s / 5 );

    s = fmod( s , 5 );

    printf("%d nota(s) de R$ 2,00\n", s / 2 );

    s = fmod( s , 2 );

    printf("%d nota(s) de R$ 1,00\n", s / 1 );


    return 0;
}
