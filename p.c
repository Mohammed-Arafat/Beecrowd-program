#include <stdio.h>

int main ()

{
    long long int i, j, n, x, x1;

    scanf("%lld", &n);

    for (i = 1; i <= n; i++)

         {
             scanf("%lld", &x);

             x *= i;

            printf("%lld\n", x);

         }






    return 0;
}
