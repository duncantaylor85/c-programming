#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100

int main(void)
{
    int i, low_rate, num_years, year;
    double value[5];

    printf("Enter interest rate: ");
    scanf("%d", &low_rate);
    printf("Enter number of years: ");
    scanf("%d", &num_years);

    printf("\n Years");
    for (i = 0; i < NUM_RATES; i++)
    {
        printf("%6d%%", low_rate+i);
    }
    printf("\n");
    


    return 0;
}
