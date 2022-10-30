#include <stdio.h>

int main ()

{
    unsigned int i, t, tc, tr, ts, x, n;

    double pc, pr, ps;

    t = 0;

    tc = 0;

    tr = 0;

    ts = 0;

    char ch;

    scanf ("%u", &n );

    for ( i = 1; i <= n; i++)
    {
        scanf ("%u %c", &x, &ch );

        t += x;

        if (ch == 'C')
        {
            tc += x;
        }

        if (ch == 'R')
        {
            tr += x;
        }

        if (ch == 'S')
        {
            ts += x;
        }
        
    }

    pc = ((double)tc / t) * 100;

    pr = ((double)tr / t) * 100;

    ps = ((double)ts / t) * 100;

    printf ("Total: %u cobaias\n", t );

    printf ("Total de coelhos: %u\n", tc );

    printf ("Total de ratos: %u\n", tr );

    printf ("Total de sapos: %u\n", ts );



    printf ("Percentual de coelhos: %.2lf %%\n", pc );

    printf ("Percentual de ratos: %.2lf %%\n", pr );

    printf ("Percentual de sapos: %.2lf %%\n", ps );
    



    return 0;
}