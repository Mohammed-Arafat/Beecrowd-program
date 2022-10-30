#include <stdio.h>

int main()

{
    double salary, increased_salary, new_salary;

    scanf("%lf", &salary );


    if (salary >= 0 && salary <= 400.00 )
    {
        new_salary = salary + (salary * 0.15);

        increased_salary = new_salary - salary;

        printf("Novo salario: %.2lf\n", new_salary );

        printf("Reajuste ganho: %.2lf\n", increased_salary );

        printf("Em percentual: 15 %%\n");

    }
    
    else if (salary >= 400.01 && salary <= 800.00 )
    {
        new_salary = salary + (salary * 0.12);

        increased_salary = new_salary - salary;

        printf("Novo salario: %.2lf\n", new_salary );

        printf("Reajuste ganho: %.2lf\n", increased_salary );

        printf("Em percentual: 12 %%\n");

    }
    
    else if (salary >= 800.01 && salary <= 1200.00 )
    {
        new_salary = salary + (salary * 0.1);

        increased_salary = new_salary - salary;

        printf("Novo salario: %.2lf\n", new_salary );

        printf("Reajuste ganho: %.2lf\n", increased_salary );

        printf("Em percentual: 10 %%\n");

    }
    
    else if (salary >= 1200.01 && salary <= 2000.00 )
    {
        new_salary = salary + (salary * 0.07);

        increased_salary = new_salary - salary;

        printf("Novo salario: %.2lf\n", new_salary );

        printf("Reajuste ganho: %.2lf\n", increased_salary );

        printf("Em percentual: 7 %%\n");

    }
    
    else if (salary > 2000.00 )
    {
        new_salary = salary + (salary * 0.04);

        increased_salary = new_salary - salary;

        printf("Novo salario: %.2lf\n", new_salary );

        printf("Reajuste ganho: %.2lf\n", increased_salary );

        printf("Em percentual: 4 %%\n");

    }
    

    return 0;
}




    
