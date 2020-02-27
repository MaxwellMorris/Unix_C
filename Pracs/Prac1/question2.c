#include <stdio.h>
int getint(void)
{
    /* Ask and take two integers */
    int x;
    printf("Enter an integer ");
    scanf("%d", &x);
    return x;
}

void test(float A, float B)
{
    /* Check if divisible. Convert integers into floats */
    int I = A/B;
    float F = A/B;
    if (I==F){
        printf("\nYou Have entered an divisible numbers.\n");
    }
    else {
        printf("\nYou have entered indivisible numbers.\n");
    }
}

int main(void)
{
    float Val_1, Val_2;

    Val_1 = getint();
    Val_2 = getint();
    test(Val_1, Val_2);
    return 0;
}
