#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str;

    // Initial memory allocation using calloc
    str = (char *)calloc(15, sizeof(char)); // Allocates memory for 15 characters
    if (str == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    strcpy(str, "Hello"); // Copying an initial string
    printf("String after calloc: %s\n", str);

    // Reallocate memory to store a larger string
    str = (char *)realloc(str, 25 * sizeof(char)); // Resizing to hold 25 characters
    if (str == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    strcat(str, " World!"); // Appending to the string
    printf("String after realloc: %s\n", str);

    // Free the allocated memory
    free(str);

    return 0;
}
