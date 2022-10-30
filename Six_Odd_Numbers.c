#include <stdio.h>

int main()

{
    int x, i;

    scanf("%d", &x );

    i = 1;

    while (i <= 6)
    {
        if (x % 2 == 0)
        {
            x++;

            printf("%d\n", x );

            x++;
 
        }

        else if (x % 2 != 0)
        {
            printf("%d\n", x );

            x += 2;

        }
        
        i++;
        
    }
    

    return 0;
}