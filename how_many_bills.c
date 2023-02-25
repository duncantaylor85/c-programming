#include <stdio.h>

int main(void) {
    int amount;
    printf("Enter dollar amount: ");
    scanf("%i", &amount);

    int twenties = amount / 20;
    amount = amount % 20;
    int tens = amount / 10;
    amount = amount % 10;
    int fives = amount / 5;
    amount = amount % 5;
    int ones = amount;

    printf("Twenties: %i\n", twenties);
    printf("Tens: %i\n", tens);
    printf("Fives: %i\n", fives);
    printf("Ones: %i\n", ones);

    return 0;
}