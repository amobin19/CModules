#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[100];
    //int prime[101];
    int i;

    for(i = 0; i <= 100; ++i){
        num[i] = i;
    }
    printf("%d", num[100]);
    return 0;
}
