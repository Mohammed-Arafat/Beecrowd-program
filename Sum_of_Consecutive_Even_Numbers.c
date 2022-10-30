#include <stdio.h>

int main ()

{
    int i, n, s;

    while (1)

    {
        s = 0;

        scanf ("%d", &n);

        if (n == 0)
        {
            break;
        }

        if (n % 2 == 0)
        {
            for ( i = n; i <= 8 + n; i += 2)
            {
                s += i;
            }
            
        }

        else
        {
            for ( i = n + 1; i <= 9 + n ; i += 2)
            {
                s += i;
            }
            
        }


        printf ("%d\n", s );
        
 
    }

    return 0;
}