#include <stdio.h>

int main()
{
    int A[100]; // Array with max capacity of 100
    int M=5, N, X, i;

    printf("The maximum size of the array (M) is 5.\n");

    printf("Enter the current number of elements (N): ");
    scanf("%d", &N);

    if (N >= M)
    {
        printf("Array is full. Cannot insert new element.\n");
        return 0;
    }

    printf("Enter the elements of the array:\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Enter the element to insert at the end: ");
    scanf("%d", &X);

    // Insert element at the end
    A[N] = X;
    N++; // Increase the count

    printf("Array after insertion:\n");
    for (i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
