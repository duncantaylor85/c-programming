#include <stdio.h>
int coolArray[1];
int *returnArray() {
    coolArray[0] = 1;
    return &coolArray;
}

int addArrayElements(int numberArray[], int length) {
    int total = 0;
    for (int i = 0; i < length; i++)
    {
        total += numberArray[i];
    }
    return total;
    
}

int main(void) {

    int *anArray = returnArray;
    int myInt = anArray[0];
    printf("this is a value from an array: %d\n", myInt);
    
    return 0;
}






