#include <stdio.h>

int main()

{
    int i, n, x1, x2, x3;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)

    {
        x1 = i;

        x2 = i * i;

        x3 = i * i * i;

        printf("%d %d %d\n", x1, x2, x3);
    }

    return 0;
}