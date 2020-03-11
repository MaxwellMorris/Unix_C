#include <stdio.h>
int powers(void)
{
    static int power = 1;
    power = power * 2;
    printf("\nPower: %d\n", power);
    return 0;

}

int main(void){
    int number;
    for (number=1;number<33;number++){
    powers();
    }
    return 0;
}
