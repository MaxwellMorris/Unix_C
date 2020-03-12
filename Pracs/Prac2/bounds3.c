#include <stdio.h>
#include "macros.h"

int powers(void);

int getValue()
{
    int value;
    scanf("%d", &value);
    return value;
}

int main(void){
    int lower, upper, value;
    int number;
    int result;

    lower = 1;

    upper = 31;

    while ((BETWEEN(lower, (upper - 1), value))==FALSE){

    printf("\nGive a value between 1 and 31\n");
    value = getValue();
    }

    for (number = 0; number < value; number++){
        result = powers();
    }
    printf("The result is %d\n", result);

    return 0;
}


