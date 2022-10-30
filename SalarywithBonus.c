#include <stdio.h>

int main()

{
    double a,b,t;

    char n;

    scanf("%s %lf %lf", &n, &a, &b );

    t = a + (b * 0.15);

    printf("TOTAL = R$ %.2lf\n", t );


    return 0;
}
