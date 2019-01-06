#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number = 0;
    int *pnumber = NULL;

    number = 10;
    printf("number's address: %p\n", &number);
    printf("number's value: %d\n\n", number);

    pnumber = &number; // addr of # in pnum

    printf("pnumber's address: %p\n", (void*)&pnumber);
    printf("pnumber's size: %d bytes\n", sizeof(pnumber));
    printf("pnumber's value: %p\n", pnumber); // value (an addr)
    printf("value pointed to: %d\n", *pnumber); // value at the addr
    return 0;
}
