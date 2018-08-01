#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declaring variables
    float far, cel;

    // taking input
    printf("Please enter a Fahrenheit value: ");
    scanf("%f", &far);

    // doing conversion
    cel = (far - 32) * 5 / 9;

    // display output
    printf("Celsius is: %f\n", cel);

    return 0;
}
