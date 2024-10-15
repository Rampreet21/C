#include <stdio.h>

int main() {
    int a[2][2], b[2][2], result[2][2];
    int i, j, k;

    // Input first matrix (2x2)
    printf("Enter elements of the first 2x2 matrix:\n");
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 2; ++j) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix (2x2)
    printf("Enter elements of the second 2x2 matrix:\n");
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 2; ++j) {
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize result matrix to zero
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 2; ++j) {
            result[i][j] = 0;
        }
    }

    // Multiply matrices a and b, store result in result matrix
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 2; ++j) {
            for (k = 0; k < 2; ++k) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print the result
    printf("Resultant matrix after multiplication:\n");
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 2; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
