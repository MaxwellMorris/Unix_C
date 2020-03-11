#include <stdio.h>
#include "macros.h"


int getValue()
{
    int value;
    scanf("%d", &value);
    return value;
}

int intBounds()
{
    int lower, upper, value;
    int inUpper, inLower, inBound;

    printf("\nGive a lower bound\n");
    lower = getValue();

    printf("\nGive a upper bound\n");
    upper = getValue();

    printf("\nGive a value\n");
    value = getValue();


    if (value < upper){
        inUpper = TRUE;
    }
    else {
        inUpper = FALSE;
    }
    if (value > lower){
        inLower = TRUE;
    }
    else {
        inLower = FALSE;
    }
    inBound = inUpper*inLower;
    printf("\n%d\n", inBound);



    return 1;


}

void charBounds()
{
    char lower, upper, value;
    char inUpper, inLower, inBound;

    printf("\nThis is the charBounds\n");
    printf("\nGive a lower bound\n");
    lower = getValue();

    printf("\nGive a upper bound\n");
    upper = getValue();

    printf("\nGive a value\n");
    value = getValue();


    if (value < upper){
        inUpper = TRUE;
    }
    else {
        inUpper = FALSE;
    }
    if (value > lower){
        inLower = TRUE;
    }
    else {
        inLower = FALSE;
    }
    inBound = inUpper*inLower;
    printf("\n%d\n", inBound);

}

int main(void)
{
    intBounds();
    charBounds();
    return 1;

}
