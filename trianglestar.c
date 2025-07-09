#include <stdio.h>

int main() {
    int n = 5;  // Number of rows (you can change this value to adjust the size of the pyramid)

    // Outer loop for the number of rows
    for (int i = 1; i <= n; i++) {
        // Print spaces for alignment
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars for the pyramid
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        // Move to the next line after printing stars
        printf("\n");
    }

    return 0;
}
