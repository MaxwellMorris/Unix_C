#include <stdio.h>
int powers(void)
{
    static int power = 1;
    power = power * 2;
#ifdef DEBUG
    printf("Debug");
#endif

    return power;

}

