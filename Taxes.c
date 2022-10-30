#include <stdio.h>

int main()

{
    double m;

    scanf("%lf", &m );

    if (m >= 0.00 && m <= 2000.00)
    {
        printf("Isento\n");
    }
    
    else if (m >= 2000.01 && m <= 3000.00)
    {
        m = m - 2000;

        m = m * 0.08;

        printf("R$ %.2lf\n", m );

    }

    else if (m >= 3000.01 && m <= 4500.00)
    {
        m = m - 3000;

        m = m * 0.18;

        m = m + 80;

        printf("R$ %.2lf\n", m );

    }

    else if (m > 4500.00)
    {
        m = m - 4500;

        m = m * 0.28;

        m = m + 350;

        printf("R$ %.2lf\n", m );

    }
    

    return 0;
}
