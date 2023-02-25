#include <stdio.h>

int main(void) {
    float balance;
    float rate;
    float monthlyPayment;

    printf("Enter amount of loan: ");
    scanf("%f", &balance);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: "); 
    scanf("%f", &monthlyPayment);

    balance = balance * ((rate / 100 / 12 )+ 1);
    balance = balance - monthlyPayment;
    printf("Balance remaining after first payment: %.2f\n", balance);

    balance = balance * (rate / 100 / 12 + 1);
    balance = balance - monthlyPayment;
    printf("Balance remaining after second payment: %.2f\n", balance);

    balance = balance * (rate / 100 / 12 + 1);
    balance = balance - monthlyPayment;
    printf("Balance remaining after third payment: %.2f\n", balance);
}