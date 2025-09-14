#include <stdio.h>

int main()
{
    int A[50]; // Array with max capacity of 50
    int m=5,n, t, i;

    printf("The maximum size of the array (M) is 5.\n");
    printf("Enter the current number of elements (N): ");
    scanf("%d", &n);

    if(n>=m)
    {
        printf("Array is full. Cannot insert new element.\n");
        return 0;
    }

    printf("Enter the elements of the array:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("The elements of the array are:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\nEnter the element to insert at the end: ");
    scanf("%d", &t);

    A[n] = t; // Insert element at the end
    n++; // Increase the count

    printf("Array after insertion:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", A[i]);
    }
    
}