#include <stdio.h>
#include "user_input.h"
#include "order.h"
void readInts(void){
    int value_1;
    int value_2;
    int value_3;
    char char_1;

    printf("List a value:");
    scanf("%d", &value_1);

    printf("List a value:");
    scanf("%d", &value_2);

    printf("List a value:");
    scanf("%d", &value_3);

    printf("(A)scending or (D)escending value:");
    scanf(" %c", &char_1);

    order3 *order_ptr = order(char_1);
    (*order_ptr)(&value_1, &value_2, &value_3);


}



