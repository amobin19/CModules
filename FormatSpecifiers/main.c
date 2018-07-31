#include <stdio.h>

int main()
{
    int intVar = 100;
    float floatVar = 333.333f;
    double doubleVar = 8.3423+11;
    char charVar = 'a';
    _Bool boolVar = 0;

    printf("intVar = %i and floatVar = %f\n", intVar, floatVar);
    printf("floatVar = %.1f\n", floatVar);
    printf("doubleVar = %e\n", doubleVar);
    printf("charVar = %c\n", charVar);
    printf("boolVar = %i\n", boolVar);

    return 0;
}
