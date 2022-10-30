#include <stdio.h>

int main ()

{
    int i, j, x, y, s, n;

    scanf ("%d", &n);

   

    for ( i = 1; i <= n ; i++)
    {
        scanf ("%d%d", &x, &y);

        s = 0;

        for ( j = 1; j <= y ; j++ )

        {

            

                if (x % 2 == 0)
                    {
                        s += (x + 1);

                        x += 2;
                    }

                

                else

                    {
                        s += x;

                        x += 2;
                
                    }

            

        }

        printf ("%d\n", s);

    }
    


    return 0;
}