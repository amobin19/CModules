#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // declare variables
    double width;
    double height;
    double perimeter = 0.0;
    double area = 0.0;

    // computations
    width = atoi(argv[1]);
    height = atoi(argv[2]);
    perimeter = 2.0 * (height + width);
    area = width * height;

    // display output
    printf("height = %.2f, width = %.2f, perimeter = %f\n", height, width, perimeter);
    printf("height = %f, width = %f, area = %f", height, width, area);

    return 0;
}
