#include <stdio.h>

int main ()

{
    int code;

    float quantity, r;

    scanf ("%d%f", &code, &quantity);

    switch (code)
    {
    case 1 :
        r = quantity * 4.00;
        break;
    
    case 2 : 
        r = quantity * 4.50;
        break;
    
    
    case 3 :
        r = quantity * 5.00;
        break;

    case 4 :
        r = quantity * 2.00;
        break;

    case 5 :
        r = quantity * 1.50;
        break;


    default:
        break;
    }

    printf ("Total: R$ %.2f\n", r);




    return 0;
}