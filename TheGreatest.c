#include <stdio.h>

#include <stdlib.h>

int main()

{
    int x,y,z,p,t;

    scanf("%d%d%d", &x, &y, &z );

    p = (x + y + abs(x - y)) / 2;

    t = (p + z + abs(p - z)) / 2;

    printf("%d eh o maior\n", t );


    return 0;
}
