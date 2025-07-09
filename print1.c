// C program to print right half pyramid pattern of star
#include <stdio.h>

int main()
{
    char rows = 5;

    // first loop for printing rows
    for (char i = 'A' ; i < rows; i++) {

        // second loop for printing character in each rows
        for (char j = 'A'; j <= i; j++) {
            printf("%c\t", i+1);
        }
        printf("\n");
    }
    return 0;
}
