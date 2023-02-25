#include <stdio.h>

int main() {
    //  v = 4/3 * pi * r³
    // r = 10
    printf("Please enter the radius of the sphere in meters: ");
    int r;
    scanf("%i", &r);
    float fourThirdsPi = 4.0f/3.0f*3.1415926535898f;
    int rCubed = r * r * r;
    float volumeOfSphere = fourThirdsPi * rCubed;
    printf("The volume of the sphere is %fm³\n", volumeOfSphere);

    return 0;
}