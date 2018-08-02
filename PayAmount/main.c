#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours, overtime;
    float payOver, pay, tax, net, tax1, tax2, tax3;

    printf("Enter hours: ");
    scanf("%d", &hours);

    if(hours > 40){
        overtime = hours - 40;
        payOver = overtime * 18;
        pay = (40 * 12) + payOver;
        if(pay <= 300){
            tax = pay * 0.15;
        }
        else if(pay > 300 && pay <= 450){
            tax1 = (pay - 300) * 0.20;
            tax = (300 * 0.15) + tax1;
        }
        else{
            tax2 = (pay - 450) * 0.25;
            tax = (300 * 0.15) + (150 * 0.20) + tax2;
        }
    }
    else{
        pay = 12 * hours;
        if(pay <= 300){
            tax = pay * 0.15;
        }
        else if(pay > 300 && pay <= 450){
            tax1 = (pay - 300) * 0.20;
            tax = (300 * 0.15) + tax1;
        }
        else{
            tax2 = (pay - 450) * 0.25;
            tax = (300 * 0.15) + (150 * 0.20) + tax2;
        }
    }

    net = pay - tax;

    printf("Gross Pay: %.2f\n", pay);
    printf("Taxes: %.2f\n", tax);
    printf("Net: %.2f\n", net);

    return 0;
}
