#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    int n, new_size;

    printf("Enter initial size of the array: ");
    scanf("%d", &n);

    // Allocate memory
    array = (int*) malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Assign values
    for (int i = 0; i < n; i++) {
        array[i] = i + 1;
    }

    // Print values
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    // Resize array
    printf("\nEnter new size of the array: ");
    scanf("%d", &new_size);
    array = (int*) realloc(array, new_size * sizeof(int));
    if (array == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    // Initialize new elements (if array is expanded)
    for (int i = n; i < new_size; i++) {
        array[i] = 0; // Initialize to 0
    }

    // Print updated array
    printf("Updated array elements: ");
    for (int i = 0; i < new_size; i++) {
        printf("%d ", array[i]);
    }

    free(array); // Free memory
    return 0;
}
