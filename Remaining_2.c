#include <stdio.h>

int main()

{
    int i, n, x;

    scanf("%d", &n );

    i = 1;

    x = 1;

    while (i <= 10000)
    {
       if (x % n == 2)
       {
             printf("%d\n", x );
       }

       x++;

       i++;
        
    }
    

    return 0;
}