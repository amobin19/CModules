#include <stdio.h>
#include <stdlib.h>

void add();
void subtract();
void multiply();
void divide();

int main()
{
    add(4, 5);
    subtract(6, 1);
    multiply(2, 3);
    divide(9, 3);
    return 0;
}

void add(int num1, int num2){
    int result = num1 + num2;
    printf("%d\n", result);
}

void subtract(int num1, int num2){
    int result = num1 - num2;
    printf("%d\n", result);
}

void multiply(int num1, int num2){
    int result = num1 * num2;
    printf("%d\n", result);
}
void divide(int num1, int num2){
    int result = num1 / num2;
    printf("%d\n", result);
}


