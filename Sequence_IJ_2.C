#include <stdio.h>

int main()

{
    int i;

    i = 1;

    while (1)
    {
        printf("I=%d J=7\n", i);

        printf("I=%d J=6\n", i);

        printf("I=%d J=5\n", i);

        if (i == 9)
        {
            break;
        }

        i += 2;
        
    }
    

    return 0;
}