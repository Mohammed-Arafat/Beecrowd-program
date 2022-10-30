#include <stdio.h>

int main ()

{
    int i, j;

    i = 1;

    j = 60;

    while (1)
    {
        printf("I=%d J=%d\n", i, j);

        if (j == 0)
        {
            break;
        }

        i += 3;

        j -= 5;
        
    }
    
    
}