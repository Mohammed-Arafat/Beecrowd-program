#include <stdio.h>

#include <math.h>

int main()

{
    double a, b, c, y, r1, r2;

    scanf("%lf%lf%lf", &a, &b, &c );

    y = (b * b) - 4 * a * c;

    if (a == 0 || y < 0)

    {

        printf("Impossivel calcular\n");

    }

    else

    {

       r1 = (-b + sqrt(y)) / (2 * a);

       r2 = (-b - sqrt(y)) / (2 * a);

       printf("R1 = %.5lf\n", r1 );

       printf("R2 = %.5lf\n", r2 );

    }


    return 0;
}
