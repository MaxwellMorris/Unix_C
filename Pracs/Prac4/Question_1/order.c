/*Static function takes in two int pointers
  if the value they point to is ascending we
  make a copy  of the values and switch what value
  the pointers dereference to*/
#include "order.h"
#include <stdio.h>
static void  ascending2(int* x, int* y){
    if (*x>*y){
    int temp;
    temp = *x;

    printf("X has been identified as less then Y x= %d, y= %d\n", *x, *y);
    *x = *y;
    *y = temp;
    printf("The values have now been swapped: x= %d, y= %d\n", *x, *y);
    }
}

void ascending3(int* v1, int* v2, int* v3){
        ascending2(v1, v3);
        ascending2(v1, v2);
        ascending2(v2, v3);
}

static void  descending2(int* x, int* y){
    if (*x<*y){
    int temp;
    temp = *x;

    *x = *y;
    *y = temp;
    }
}

void descending3(int* v1, int* v2, int* v3){
    descending2(v1, v3);
    descending2(v1, v2);
    descending2(v2, v3);
}




order3 order(char input){
    order3 order_ptr;
    if (input == 'A'){
        order_ptr = &ascending3;
    }
    else if(input =='D'){
        order_ptr = &descending3;
    }
    else {
    order_ptr = NULL;
    }
    return order_ptr;
}





















