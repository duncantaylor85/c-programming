#include <stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void) {
    float fahrenheit, celcius;
    char choice;
    printf("Convert from Fahrenheit or Celcius? (type c or f and press return.)\n");
    scanf("%c", &choice);
    if (choice == 'c')
    {
        printf("Enter Celcius temperature: \n");
        scanf("%f", &celcius);
        fahrenheit = (celcius / SCALE_FACTOR) + FREEZING_PT;
        printf("Temperatur in Fahrenheit is %.1f\n", fahrenheit);
    } else {
        printf("Enter fahrenheit temperature: ");
        scanf("%f", &fahrenheit);
        celcius = (fahrenheit- FREEZING_PT) * SCALE_FACTOR;
        printf("Temperatur in Celcius is %.1f\n", celcius);
    }
    return 0;
}