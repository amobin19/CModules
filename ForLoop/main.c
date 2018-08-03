#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long sum = 0LL;
    unsigned int count = 0;

    printf("\nEnter the number of integers you want to sum: ");
    scanf(" %u", &count);

    unsigned int i;
    for(i = 1; i <= count; ++i){
        sum += i;
        printf("%u\n", i);
    }

    printf("\nTotal of the first %u number is %llu\n", count, sum);
    return 0;

    // for(;;){} // infinite loop
}
