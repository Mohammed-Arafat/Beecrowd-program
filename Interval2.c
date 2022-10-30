#include <stdio.h>

int main()

{
    int i, a, xp, xn, n;

    scanf("%d", &n );

    i = 1;

    xp = 0;

    xn = 0;

    while (i <= n)
    {
        scanf("%d", &a );

        if (a >= 10 && a <= 20)
        {
            xp++;
        }

        else

        {
            xn++;
        }

        i++;
    }

    printf("%d in\n", xp );

    printf("%d out\n", xn );



    return 0;
}
