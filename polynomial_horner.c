#include <stdio.h>

int main(void) {
    int x;
    printf("Please enter a value for x: ");
    scanf("%i", &x);
    int y;
    y = -6 + x * (7 + x *(-1 + x * (-5 + x * (2 + 3 * x))));
    printf("%i\n", y);
}