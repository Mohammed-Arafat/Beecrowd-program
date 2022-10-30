#include <stdio.h>

#include <limits.h>

int main()

{
    int i, n, x, max, position;

    i = 1;

    n = 100;

    max = INT_MIN;

    while (i <= n)
    {
        scanf("%d", &x );

        if (max < x)
        {
            max = x;

            position = i;

        }

        i++;
        
    }

    printf("%d\n", max );

    printf("%d\n", position );
    

    return 0;
}