#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char buf[100]; // input buffer
    int nLetters = 0; // number of letters in input
    int nDigits = 0; // number of digits in input
    int nPunct = 0; //  number of punctuation characters

    printf("Enter an string less than %d characters: \n", 100);
    scanf("%s", buf);

    int i = 0; // buffer index
    while(buf[i]){
        if(isalpha(buf[i])){
            ++nLetters; // increment letter count
        }
        else if(isdigit(buf[i])){
            ++nDigits;
        }
        else if(ispunct(buf[i])){
            ++nPunct;
        }
        ++i;
    }
    printf("\nString contained %d letters, %d digits, and %d punctuation.\n", nLetters, nDigits, nPunct);
    return 0;
}
