#include <stdio.h>

/*Forward Declarations*/

int factorial(int n);
int readNumber(void);


int main(void)
{
    int FACTORIAL;
    int input = readNumber();
    while (input>=0)
    {
        FACTORIAL = factorial(input);
        if (input>=0)
        {
            printf("The factorial is: %d\n", FACTORIAL);
        }
        input = readNumber();
    }
    printf("Invalid number.\n");
    return 0;

}

int readNumber(void)
{
    int x;
    printf("input and integer: ");
    scanf("%d", &x);
    return x;
}


int factorial(int n)
{
    int factorial = 1;
    int i;
    for (i=n; i>1; i--)
    {
       factorial = factorial*i;
    }


    return factorial;
}


