#include <stdio.h>

int main()

{
    double a,b,c,x,y,z,p;

    scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &x, &y, &z );

    p = (b * c) + (y * z);

    printf("VALOR A PAGAR: R$ %.2lf\n", p );


    return 0;
}
