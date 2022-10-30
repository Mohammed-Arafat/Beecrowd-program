#include <stdio.h>

int main ()

{
    int i, n, x;

    scanf ("%d", &n);

    for ( i = n, x = 1; i >= 1; i--)
    {
        x = x * i;
    }
    

    printf("%d\n", x);
    

    return 0;
}