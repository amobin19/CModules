#include <stdio.h>
#include <stdlib.h>

void gcd(int num1, int num2);
void absoluteValue(float num1);
void squareRoot(float num1);

int main()
{
    gcd(45, 0);
    absoluteValue(-6.3726528321);
    squareRoot(1681);
    return 0;
}

void gcd(int num1, int num2){
    int r;
    if(num1 < 0 || num2 < 0){
        printf("values must be greater than %d\n", 0);
    }
    else{
        while(num2 != 0){
            r = num1 % num2;
            num1 = num2;
            num2 = r;
        }
        printf("%d\n", num1);
    }
}

void absoluteValue(float num1){
    if(num1 >= 0){
        printf("%.1f\n", num1);
    }
    else{
        num1 *= -1;
        printf("%.1f\n", num1);
    }
}

void squareRoot(float num1){
    if(num1 >= 0){
        float x = num1;
        float y = 1;
        while(x - y > 0.000001){
            x = (x + y)/ 2;
            y = num1 / x;
        }
        printf("%.1f\n", x);
    }
    else{
        printf("%.1f\n", num1);
    }
}
