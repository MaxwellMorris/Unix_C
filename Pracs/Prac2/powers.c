#include <stdio.h>
#include <math.h>
double powers(void)
{
    static double power = 0.0;
    double number;
    power = power + 1;
    number = pow(2.0, power);
    return number;

}

int main(void)
{
    double input;
    double var = 0;
    double exponent;
    printf("What power do you want?\n");
    scanf("%lf", &input);
    while (var< input)
    {
        var++;
        exponent = powers();
        printf("%f\n", exponent);

    }
    return 0;
}

