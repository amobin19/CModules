#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minutes;
    double days;
    double years;

    printf("Enter minutes: ");
    scanf("%d", &minutes);

    years = ((double)minutes) / 525600;
    days = ((double)minutes) / 1440;

    // printf("minutes: %d\n", minutes);
    printf("days = %f\n", days);
    printf("years = %f", years);
    return 0;
}
