#include <stdio.h>

int main()

{
    double a, b, c, pi = 3.14159, tri, cri, tra, qua, ret;

    scanf("%lf %lf %lf", &a, &b, &c);

    tri = ((double)1 / 2) * a * c;

    cri = pi * (c * c);

    tra = ((a + b)/2) * c;

    qua = b * b;

    ret = a * b;

    printf("TRIANGULO: %.3lf\n", tri);

    printf("CIRCULO: %.3lf\n", cri);

    printf("TRAPEZIO: %.3lf\n", tra);

    printf("QUADRADO: %.3lf\n", qua);

    printf("RETANGULO: %.3lf\n", ret);


    return 0;
}
