int main(int argc, char const *argv[])
{
    float price;
    printf("Enter an amount: ");
    scanf("%f", &price);
    price = 1.05 * price;
    printf("With tax added: $%.2f \n", price);
    return 0;
}
