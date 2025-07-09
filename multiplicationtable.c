#include <stdio.h>

int main() {
    int i, j;

    // Print the header for the tables
    printf("  1\t  2\t  3\t  4\t  5\n");
    printf("---------------------------------\n");

    // Loop through rows (multiples)
    for(i = 1; i <= 10; i++) {
        for(j = 1; j <= 5; j++) {
            printf("%2d x %2d = %2d\t", j, i, j * i);
        }
        printf("\n");  // New line after each row of results
    }

    return 0;
}
