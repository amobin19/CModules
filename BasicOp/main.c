#include <stdio.h>

int main()
{
    int a = 33;
    int b = 15;
    int result1 = 0;

    _Bool c = 1;
    _Bool d = 0;
    _Bool result2;
    _Bool result3;

    result2 = c && d;
    result3 = !c;

    printf("%d\n", result3);

    result1 = a + b;
    printf("result is %d\n", ++a);
    return 0;
}
