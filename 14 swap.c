#include <stdio.h>

void swapfunction(int *x, int *y);

int main()
{
    int a = 100, b = 200;

    swapfunction(&a, &b);
    printf("%d\n",a);
    printf("%d",b);
    return 0;
}
void swapfunction(int *x, int *y)
{
    int x_store;
    x_store = *x;
    *x = *y;
    *y = x_store;
}