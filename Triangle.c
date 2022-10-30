#include <stdio.h>

int main()

{
    double a, b, c, s, x;

    scanf("%lf%lf%lf", &a, &b, &c );

    if ((a + b) > c && (b + c) > a && (c + a) > b)

    {
        s = (a + b + c);

        printf("Perimetro = %.1lf\n", s);
    }

    else

    {
        x = ((a + b) / 2) * c;

        printf("Area = %.1lf\n", x);
    }


    return 0;
}

