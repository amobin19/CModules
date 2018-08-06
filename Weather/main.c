#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define MONTHS 12
#define YEARS 5

int main()
{
    float rain[YEARS][MONTHS] = {
        {0.2,1.0,3.0,5.4,5.3,9.1,9.0,6.5,0.0,5.0,8.4,5.2},
        {4.2,8.2,2.7,0.3,8.2,6.6,7.0,3.7,2.8,4.2,6.7,6.5},
        {4.9,6.1,0.2,1.8,1.6,9.7,0.3,9.8,7.5,4.4,0.2,9.4},
        {5.6,9.5,2.9,4.8,9.0,7.6,5.0,5.6,7.9,8.6,7.1,9.5},
        {1.7,3.2,3.8,4.1,4.6,1.4,3.7,3.6,5.6,6.2,3.0,3.5}
    };

    int year, month;
    float total, sub;

    printf("YEAR RAIN(inches)\n");

    for(year = 0, total = 0; year < YEARS; ++year){
        for(month = 0, sub = 0; month < MONTHS; ++month){
            sub += rain[year][month];
        }
        printf("%d %.1f\n", 2010 + year, sub);
        total += sub;
    }
    total = total/MONTHS;
    printf("\n");
    printf("The yearly average is %.1f inches.\n", total);
    printf("\n");
    printf("MONTHLY AVERAGES:\n");
    printf("\n");
    printf("Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");

    for(month = 0; month < MONTHS; ++month){
        for(year = 0, sub = 0; year < YEARS; ++year){
            sub += rain[year][month];
        }
        sub = sub/YEARS;
        printf("%.1f ", sub);
    }
    return 0;
}
