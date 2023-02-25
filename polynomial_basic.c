int main(void) {
    int x;
    printf("Please enter a value for x: ");
    scanf("%i", &x);
    int y;
    int x5 = x * x * x * x * x;
    int x4 = x5 / x;
    int x3 = x4 / x;
    int x2 = x3 / x;

    y = (3 * x5) + (2 * x4) - (5 * x3)  - x2 + (7 * x) -6;
    printf("%i\n", y);



    return 0;
}