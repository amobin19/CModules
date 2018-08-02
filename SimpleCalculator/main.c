#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declaring variables
    float num1, num2, result;
    char op;

    // taking user input
    printf("Select an operation (+, -, *, /): ");
    scanf("%c", &op);
    printf("Please enter value 1: ");
    scanf("%f", &num1);
    printf("Please enter value 2: ");
    scanf("%f", &num2);

    // computing user input
    switch(op){
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        printf("Invalid operation.\n");
        break;
    }

    // displaying result
    printf("Result: %f", result);
    return 0;
}
