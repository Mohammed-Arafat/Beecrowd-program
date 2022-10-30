#include <stdio.h>

int main()

{
   double n1, n2, n3, n4, m, x, a;

   scanf("%lf%lf%lf%lf", &n1, &n2, &n3, &n4 );

    m = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / (2 + 3 + 4 + 1);

    printf("Media: %.1lf\n", m );

    if (m >= 7.0)

    {
        printf("Aluno aprovado.\n");
    }

    else if (m < 5.0)

    {
        printf("Aluno reprovado.\n");
    }

    else if (m >= 5.0 && m <= 6.9)

    {
        printf("Aluno em exame.\n");

        scanf("%lf", &a );

        printf("Nota do exame: %.1lf\n", a );

        x = (m + a) / 2;

        if (x >= 5.0)

        {
            printf("Aluno aprovado.\n");
        }

        else if (x <= 4.9)

        {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1lf\n", x );



    }


    return 0;
}

