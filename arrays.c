#include <stdio.h>

int main(void) {
    
    int test[5];
    test[0] = 1;
    test[1] = 2;
    test[2] = 4;
    test[3] = 8;
    test[4] = 16;

    for (int i = 0; i < 5; i++)
    {
        printf("Value at array index %d is: %d\n", i, test[i]);
    }
    

    return 0;
}