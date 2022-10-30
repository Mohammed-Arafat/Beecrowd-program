#include <stdio.h>

int main ()

{
    unsigned int i, j, k, n, x, s;

    scanf ("%u", &n );

    for ( i = 1; i <= n; i++)
    {
        s = 0;


        scanf ("%u", &x );

        for ( j = 1; j < x; j++)
        {
            k = x % j;

            if (k == 0)
            {
                s += j;
            }

            
        }

        if (x == s)
        {
            printf ("%u eh perfeito\n", x );
        }

        else

        {
            printf ("%u nao eh perfeito\n", x );
        }
        
        
    }
    



    return 0;
}