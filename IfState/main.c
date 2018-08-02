#include <stdio.h>

int main()
{
    int num, remainder;

    printf("Enter number to be tested: ");
    scanf("%i", &num);
    remainder = num % 2;

    if(remainder == 0){
        printf("The number is even.");
    }
    else{
        printf("The number is odd.");
    }
    return 0;
}
