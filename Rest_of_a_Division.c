#include <stdio.h>

int main()

{
    int i, a, b, x;

    scanf("%d%d", &a, &b);

    if (a < b)

    {

        for ( i = a + 1; i > a && i < b; i++)
        {
            x = i % 5;

            if (x == 2 || x == 3)
            {
                printf("%d\n", i);
            }
            
        }

    }

    else if (a > b)

    {
            for ( i = b + 1; i > b && i < a; i++)
        {
            x = i % 5;

            if (x == 2 || x == 3)
            {
                printf("%d\n", i);
            }
            
        }
    }
    

    return 0;
}