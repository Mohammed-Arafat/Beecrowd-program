#include <stdio.h>

int main()

{
    double a1, a2, a3, a4, a5, a6;

    int a = 0;

    scanf("%lf%lf%lf%lf%lf%lf", &a1, &a2, &a3, &a4, &a5, &a6 );

    if (a1 > 0)
    {
        a++;
    }

    if (a2 > 0)
    {
        a++;
    }
    
    if (a3 > 0)
    {
        a++;
    }

    if (a4 > 0)
    {
        a++;
    }

    if (a5 > 0)
    {
        a++;
    }
    
    if (a6 > 0)
    {
        a++;
    }
    
    printf("%d valores positivos\n", a );
    
    
    return 0;
}