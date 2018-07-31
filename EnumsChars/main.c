#include <stdio.h>

int main()
{
    /*
    enum month {Jan, Feb, March};
    enum month myMonth = Jan;
    */

    // Enum
    enum gender {male, female};

    enum gender myGender;

    myGender = male;

    enum gender anotherGender = female;

    bool isMale = (myGender == anotherGender);

    // Char
    char myChar = '\n';

    printf("%c", myChar);

    return 0;
}


