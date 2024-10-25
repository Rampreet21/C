#include <stdio.h>

void sum(int *a, int *b);

int main()
{
    int x = 10, y = 20;
    sum(x,y);
    printf("%d %d", x, y);
    return 0;

}

void sum(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

