#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int grades[10]; // array storing 10 values
    int count = 10; // number of values to be read
    long sum = 0; // sum of the numbers
    float average = 0.0f; // avg of the numbers

    printf("\nEnter the 10 grades:\n"); // prompt for the input

    int i;
    for(i = 0; i < count; ++i){
        printf("%2u> ", i + 1);
        scanf("%d", &grades[i]); // read a grade
        sum += grades[i]; // add it to sum
    }

    average = (float)sum/count; // average
    printf("\nAverage of the grades entered is: %.2f\n", average);
    return 0;
}
