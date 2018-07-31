#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declaring and initializing enum
    enum company {Google, Facebook, Xerox, Yahoo, Ebay, Microsoft, Apple = 58, Amazon};
    enum company myEnum1 = Xerox;
    enum company myEnum2 = Google;
    enum company myEnum3 = Ebay;
    enum company myEnum4 = Amazon;

    // Display outputs
    printf("Xerox enum: %d\n", myEnum1);
    printf("Google enum: %d\n", myEnum2);
    printf("Ebay enum: %d\n", myEnum3);
    printf("Amazon enum: %d\n", myEnum4);
    printf("%d %d %d", myEnum1, myEnum2, myEnum3);

    return 0;
}
