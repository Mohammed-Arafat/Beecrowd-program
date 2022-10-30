#include <stdio.h>

int main()

{
    int i, n, x1, x2, x;

    scanf("%d", &n);

    x1 = 0;

    x2 = 1;

    for (i = 1; i <= n; i++)

    {
        if (i == n)
        {
            printf("%d\n", x1);

            break;
        }
        
        
        printf("%d ", x1);

        x = x1 + x2;

        x1 = x2;

        x2 = x;
        
    }

    return 0;
}