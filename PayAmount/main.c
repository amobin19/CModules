#include <stdio.h>
#include <stdlib.h>

#define PAY_RATE      12
#define OVERTIME_RATE 18
#define TAX_RATE_300  0.15
#define TAX_RATE_450  0.20
#define TAX_RATE_OVER 0.25

int main()
{
    // declaring variables
    int hours, overtime;
    float payOver, pay, tax, net, tax1, tax2, tax3;

    // taking user input
    printf("Enter hours: ");
    scanf("%d", &hours);

    // calculating gross
    if(hours > 40){
        overtime = hours - 40;
        payOver = overtime * OVERTIME_RATE;
        pay = (40 * PAY_RATE) + payOver;
    }
    else{
        pay = PAY_RATE * hours;
    }

    // calculating taxes
    if(pay <= 300){
        tax = pay * TAX_RATE_300;
    }
    else if(pay > 300 && pay <= 450){
        tax1 = (pay - 300) * TAX_RATE_450;
        tax = (300 * TAX_RATE_300) + tax1;
    }
    else{
        tax2 = (pay - 450) * TAX_RATE_OVER;
        tax = (300 * TAX_RATE_300) + (150 * TAX_RATE_450) + tax2;
    }

    // calculating net pay
    net = pay - tax;

    // display output
    printf("Gross Pay: %.2f\n", pay);
    printf("Taxes: %.2f\n", tax);
    printf("Net: %.2f\n", net);

    return 0;
}
