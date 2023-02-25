#include <stdio.h>

int main(void) {
    float pi = 3.142;
    int myInt = 5;
    printf("This is pi: %-10.3f to 3dp. This is an int: %.3d\n\a", pi, myInt);

    float *piPointer = &pi;
    printf("This is the address of the pointer: %x\n", piPointer);
    printf("And this is the value of the float which it's pointing at: %.3f\n", *piPointer);

    float *anotherPointer;
    anotherPointer = piPointer;

    printf("this is the value of anotherPointer: %f\n", *anotherPointer);

    return 0;
}