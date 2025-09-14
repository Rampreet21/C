#include <stdio.h>

int main() {
    int A[10];  // Initial array
    int M = 5;  // Maximum size
    int N ;    // Current number of elements
    int X = 99;   // Element to insert
    int P = 2;    // Position (0-based index) to insert X
    int i;

    printf("The maximum size of the array (M) is 5.\n");
    printf("Enter the current number of elements (N): ");
    scanf("%d", &N);


    if (N >= M) {
        printf("Array is full. Cannot insert new element.\n");
        return 0;
    }

    printf("Enter the elements of the array:\n");
    for(i=0; i<N; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("The elements of the array are:\n");
    for(i=0; i<N; i++)
    {
        printf("%d ", A[i]);
    }
    
    if (P < 0 || P > N) {
        printf("Invalid position. Cannot insert element.\n");
        return 0;
    }

    // Shift elements to the right from end to position P
    for (i = N; i > P; i--) {
        A[i] = A[i - 1];
    }

    // Insert the element at position P
    A[P] = X;
    N++; // Update size

    // Print updated array
    printf("\nArray after insertion:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
