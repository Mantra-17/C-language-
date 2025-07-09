#include <stdio.h>

#define ROWS1 3  // Number of rows in the first matrix
#define COLS1 3  // Number of columns in the first matrix
#define ROWS2 3  // Number of rows in the second matrix
#define COLS2 3  // Number of columns in the second matrix

int main() {
    int matrix1[ROWS1][COLS1], matrix2[ROWS2][COLS2], result[ROWS1][COLS2];
    int i, j, k;

    // Input for the first matrix
    printf("Enter elements of the first matrix (%dx%d):\n", ROWS1, COLS1);
    for (i = 0; i < ROWS1; i++) {
        for (j = 0; j < COLS1; j++) {
            printf("Enter element for matrix1[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input for the second matrix
    printf("\nEnter elements of the second matrix (%dx%d):\n", ROWS2, COLS2);
    for (i = 0; i < ROWS2; i++) {
        for (j = 0; j < COLS2; j++) {
            printf("Enter element for matrix2[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Initialize result matrix to 0
    for (i = 0; i < ROWS1; i++) {
        for (j = 0; j < COLS2; j++) {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (i = 0; i < ROWS1; i++) {
        for (j = 0; j < COLS2; j++) {
            for (k = 0; k < COLS1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the result matrix
    printf("\nResultant matrix after multiplication:\n");
    for (i = 0; i < ROWS1; i++) {
        for (j = 0; j < COLS2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
