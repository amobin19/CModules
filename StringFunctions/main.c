#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // Copy
    char myString[] = "My name is Ayman";
    char temp[50];
    strncpy(temp, myString, sizeof(temp) - 1);
    printf("The length is: %s\n", temp);

    // Concatenate
    char src[50], dest[50];
    strcpy(src, "This is the source");
    strcpy(dest, "This is the destination");
    strncat(dest, src, sizeof(src));
    printf("Final destination string : |%s|\n", dest);

    // Comparing
    printf("strcmp(\"A\", \"A\") is ");
    printf("%d\n", strcmp("A", "A"));
    printf("strcmp(\"A\", \"B\") is ");
    printf("%d\n", strcmp("A", "B"));
    printf("strcmp(\"B\", \"A\") is ");
    printf("%d\n", strcmp("B", "A"));
    printf("strcmp(\"C\", \"A\") is ");
    printf("%d\n", strcmp("C", "A"));
    printf("strcmp(\"Z\", \"a\") is ");
    printf("%d\n", strcmp("Z", "a"));
    printf("strcmp(\"apples\", \"apple\") is ");
    printf("%d\n", strcmp("apples", "apple"));

    return 0;
}
