#include <stdio.h>

int main()

{
    int n;

    double a,b,SALARY;

    scanf("%d%lf%lf", &n, &a, &b);

    SALARY = a*b;

    printf("NUMBER = %d\n", n );

    printf("SALARY = U$ %.2lf\n", SALARY );


    return 0;
}
