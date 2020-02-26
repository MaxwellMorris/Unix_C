#include <stdio.h>

int readInt(void) {
// This function when ran asks for a integer from the user
    int result;
    printf("Enter an integer: ");
    scanf("%d", &result);
    return result;
}

void printInt(int x) {
// Creates a function printInt that prints the integer argument
  printf("The result is: ");
  printf("%d", x);
  printf("\n");

}

int main(void) {

/* This is the main function that finds the product of the sums and 
 * the differences of the two numbers*/
    int a, b, c;
    a= readInt();
    b= readInt();
    c = (a+b)*(a-b);
    printInt(c);
    return 0;
}



