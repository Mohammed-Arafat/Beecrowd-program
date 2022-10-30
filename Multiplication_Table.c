#include <stdio.h>

int main()

{
    int i, n, r;

    scanf("%d", &n );

    i = 1;

    while (i <= 10)
    {
        r = i * n;

        printf("%d x %d = %d\n", i, n, r );

        i++;

    }
    

    return 0;
}