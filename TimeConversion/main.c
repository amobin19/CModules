#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minutes;
    double days;
    double years;

    printf("Enter minutes: ");
    scanf("%d", &minutes);

    years = ((float)(minutes)) / 525600;
    days = ((float)(minutes)) / 1440;

    printf("days = %f\n", days);
    printf("years = %f", years);
    return 0;
}
