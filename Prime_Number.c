#include <stdio.h>

int main ()

{
    unsigned int i, j, f, x, s, n;

    scanf ("%u", &n );

    for ( i = 1 ; i <= n ; i++)
    {
        scanf ("%u", &x );

        f = 0;

        for ( j = 2 ; j < x; j++)
        {
            s = x % j;

            if (s == 0)
            {
                f++;
            }
            
        }

        if (f != 0)
        {
            printf ("%u nao eh primo\n", x );
        }

        else

        {
            printf ("%u eh primo\n", x );
        }
        
        
    }
    

    return 0;
}
