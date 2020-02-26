#include <stdio.h>

/*Forward Declarations*/

int factorial(int n);
int readNumber(void);


int main(void)
{
    int input = readNumber();
    factorial(input);
    return 0;

}

int readNumber(void)
{
    int x;
    printf("input and integer");
    scanf("%d", &x);
    return x;

}


int factorial(int n)
{
    int count = 1;
    int factorial = 1;
    while (n - count != 0)
    {
        factorial = factorial*(count+1);
        count++;
    }
    printf("The factorial is: %d", factorial);
    return 0;
}
