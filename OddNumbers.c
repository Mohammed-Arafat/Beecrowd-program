#include <stdio.h>

int main()

{
     int a, i, s;

     scanf("%d", &a );

     i = 0;

     s = 0;

     while (i <= a)
     {
        if ( s % 2 != 0 )
        {
           printf("%d\n", s );
        }

        s++;

        i++;

     }


    return 0;
}
