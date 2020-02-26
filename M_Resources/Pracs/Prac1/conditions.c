#include <stdio.h>

int main(void) {
    int number;
    scanf("%d", &number);

    if (number<0 | number > 10)
        printf("Out of Range\n");

    else if(number != 5)
        printf("Wrong Number");

    else
        printf("Correct \n");
    return 0;
}
