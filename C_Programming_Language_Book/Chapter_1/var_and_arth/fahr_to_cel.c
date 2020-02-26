#include <stdio.h>


main(){
    int fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 15;

    fahr = lower;
    printf("Conversion of fahrenheit values between \n0-300 in steps of 15\n\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0)*(fahr-32);
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;

    }
}





