#include <stdio.h>

int main(int argc, char *argv[])
{
    int numOfArg = argc;
    char *arg1 = argv[0];
    char *arg2 = argv[1];
    char *arg3 = argv[2];

    printf("Number of Arguments: %d\n", numOfArg);
    printf("Argument 1 is the program name: %s\n", arg1);
    printf("Argument 2 is the command line argument: %s\n", arg2);
    printf("Argument 3 is the other command line argument: %s", arg3);

    return 0;
}
