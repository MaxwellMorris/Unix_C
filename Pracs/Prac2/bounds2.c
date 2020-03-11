#include <stdio.h>
#include "macros.h"

double getValue()
{
    double value;
    scanf("%lf", &value);
    return value;
}

int main(void){
    double lower, upper, value;
    double inBound;

    printf("\nGive a lower bound\n");
    lower = getValue();

    printf("\nGive a upper bound\n");
    upper = getValue();

    printf("\nGive a value\n");
    value = getValue();

    inBound = BETWEEN(lower, upper, value);
    if (inBound == TRUE){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}


