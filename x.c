#include <stdio.h>

int main ()

{
    int i, x, n, d, p, ps, bin;

    scanf ("%d", &n);

    for ( i = 1; i <= n; i++)
    {
        scanf ("%d", &x);

        d = x;

        p = 0;

        ps = 0;

        while (d >= 0)
        {
            bin = (p * 10) + ps;

            ps = p;

            p = d % 2;

            d = d / 2;
        }

    }

    printf ("%d\n", bin);



    return 0;
}
