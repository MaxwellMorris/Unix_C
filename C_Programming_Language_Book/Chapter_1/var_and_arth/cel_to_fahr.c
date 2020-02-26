#include <stdio.h>


main(){
    int fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("Conversion of Celsius to Fahrenheit values between \n%d-%d in steps of %d\n\n", lower, upper, step);
    while (celsius <= upper) {
        fahr = (celsius*(9.0/5.0))+35;
        printf("%d\t%d\n", celsius, fahr);
        celsius = celsius + step;

    }
}





