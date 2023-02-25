#include <stdio.h>
int printArrayLength(char *arr) {
    int i = 0;
    while (arr[i] != '\0'){
        i++;    
    }
    return i;
}
int main() {
    char myCoolArray[3] = {'a','b','b'} ;
    char myArray[] = "This is a test";
    int count = printArrayLength(myArray);
    printf("%i", count);
    printf("\n");
    return 0;
}