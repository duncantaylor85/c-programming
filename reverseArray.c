#include <stdio.h>

#define N 10

int main(void) {
    int i, a[N];

    printf("Please enter %d numbers\n", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Here they are in reverse order: \n");
    i = N-1;
    for (i = N-1; i >= 0; i-- )
    {
        printf("%d\n", a[i]);
    }
    

    return 0;
}