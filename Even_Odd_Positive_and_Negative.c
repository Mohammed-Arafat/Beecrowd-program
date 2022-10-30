#include <stdio.h>

int main()

{
    int v1, v2, v3, v4, v5, p, n, odd, even;

    scanf("%d%d%d%d%d", &v1, &v2, &v3, &v4, &v5 );

    p = 0;

    n = 0;

    odd = 0;

    even = 0;

    if (v1 > 0)
    {
        p++;
    }

    if (v2 > 0)
    {
        p++;
    }

    if (v3 > 0)
    {
        p++;
    }

    if (v4 > 0)
    {
        p++;
    }

    if (v5 > 0)
    {
        p++;
    }




    if (v1 < 0)
    {
        n++;
    }

    if (v2 < 0)
    {
        n++;
    }

    if (v3 < 0)
    {
        n++;
    }

    if (v4 < 0)
    {
        n++;
    }

    if (v5 < 0)
    {
        n++;
    }



    if (v1 % 2 == 0)
    {
        even++;
    }

    if (v2 % 2 == 0)
    {
        even++;
    }

    if (v3 % 2 == 0)
    {
        even++;
    }

    if (v4 % 2 == 0)
    {
        even++;
    }

    if (v5 % 2 == 0)
    {
        even++;
    }




    if (v1 % 2 != 0)
    {
        odd++;
    }

    if (v2 % 2 != 0)
    {
        odd++;
    }

    if (v3 % 2 != 0)
    {
        odd++;
    }

    if (v4 % 2 != 0)
    {
        odd++;
    }

    if (v5 % 2 != 0)
    {
        odd++;
    }


    printf("%d valor(es) par(es)\n", even );

    printf("%d valor(es) impar(es)\n", odd );

    printf("%d valor(es) positivo(s)\n", p );

    printf("%d valor(es) negativo(s)\n", n );


    return 0;
}
