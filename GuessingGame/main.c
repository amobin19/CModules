#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    // random number
    time_t t;
    srand((unsigned) time(&t));
    int randomNumber = rand() % 21;
    int counter = 5;
    int guess;

    // introduction
    printf("This is a guessing game.\n");
    printf("I have chosen a number between 0 and 20 which you must guess.\n");
    printf("\n");

    // main game
    while(counter > -1){
        printf("You have %d tries left.\n", counter);
        printf("Enter a guess: ");
        scanf("%d", &guess);
        if(guess < 0 || guess > 20){
            printf("Sorry, %d is wrong. My number is within 0 and 20.\n", guess);
            counter--;
            if(counter == 0){
                printf("\n");
                printf("You have lost. The answer is %d.", randomNumber);
                break;
            }
            printf("\n");
        }
        else if(guess < randomNumber){
            printf("Sorry, %d is wrong. My number is greater than that.\n", guess);
            counter--;
            if(counter == 0){
                printf("\n");
                printf("You have lost. The answer is %d.", randomNumber);
                break;
            }
            printf("\n");
        }
        else if(guess > randomNumber){
            printf("Sorry, %d is wrong. My number is less than that.\n", guess);
            counter--;
            if(counter == 0){
                printf("\n");
                printf("You have lost. The answer is %d.", randomNumber);
            }
            printf("\n");
        }
        else if(guess == randomNumber){
            printf("Congratulations. You guessed it!");
            break;
        }
        else{
            printf("Sorry, you have lost. The correct answer was %d.", randomNumber);
            break;
        }
    }

    return 0;
}
