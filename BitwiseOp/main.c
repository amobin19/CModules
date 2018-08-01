#include <stdio.h>

int main()
{
    unsigned int a = 60; // 0011 1100
    unsigned int b = 13; // 0000 1101
    int resultAnd = 0;
    int resultOr = 0;
    int resultShift = 0;

    resultAnd = a & b;
    // 0000 1100 = 12

    resultOr = a | b;
    // 0011 1101 = 61

    resultShift = a >> 3;
    // 0000 0111 = 7

    printf("result is %d\n", resultAnd);
    printf("result is %d\n", resultOr);
    printf("result is %d", resultShift);

    return 0;
}
