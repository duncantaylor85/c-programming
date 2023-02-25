#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool digits[10] = {false};
    int digit;
    long n;
    int size = sizeof(digits) /sizeof(digits[0]);

    printf("Input a number: ");
    scanf("%d", &n);
    printf("\n");
    while (n > 0)
    {
        digit = n % 10;
        if(digits[digit] == true) {
            break;
        }
        digits[digit] = true;
        n /= 10;
    }
    if(n > 0) {
        printf("There was a repeated digit.\n");
    } else {
        printf("There was no repeated digit.\n");
    }

    printf("The size of the array is: %d\n", size);

    

    return 0;
}

