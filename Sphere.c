#include <stdio.h>

int main()

{
    double pi=3.14159, r,v;

    scanf("%lf", &r );

    v = ( (double) 4/3) * pi * (r * r * r);

    printf("VOLUME = %.3lf\n", v );


    return 0;
}

