#include <stdio.h>

int main()

{
    int sh, sm, eh, em, shm, ehm, t, h, m;

    scanf("%d%d%d%d", &sh, &sm, &eh, &em );

    shm = (sh * 60) + sm;

    ehm = (eh * 60) + em;

    if (shm < ehm)

    {
        t = ehm - shm;

        h = t / 60.0;

        m = t % 60;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m );
    }

    else if (shm > ehm)

    {
        t = (ehm + 1440) - shm;

        h = t / 60.0;

        m = t % 60;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m );
    }

    else if (shm == ehm)

    {
        t = 1440;

        h = t / 60.0;

        m = t % 60;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m );
    }



    return 0;
}
