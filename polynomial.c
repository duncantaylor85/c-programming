#include <stdio.h>

int main(void) {
    //3x⁵+2x⁴-5x³-x²+7x-6
    int x;
    int total;
    printf("Please enter a value for x: ");
    scanf("%d", &x);
    total = -6 + x*(7+x*(-1+x*(-5+x*(2+3*x))));
    printf("total: %d", total);
    return 0; 
}