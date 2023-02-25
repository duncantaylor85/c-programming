#include <stdio.h>

int main(void) {
    printf("Enter a date (mm/dd/yyyy): ");
    char * month[2];
    char * day[2];
    char * year[4];
    scanf("%2s/%2s/%4s", &month, &day, &year);
    printf("%s%s%s\n", year, month, day);

    return 0;
}