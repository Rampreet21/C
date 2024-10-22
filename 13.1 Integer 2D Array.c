#include <stdio.h>

int main()
{
    // Integer 2D Arry
    int a[2][5] = {{10, 20, 30, 40, 50}, {60, 70, 80, 90, 100}};

    printf("%d %d %d %d %d %d %d %d %d %d",
           a[0][0], a[0][1], a[0][2], a[0][3], a[0][4],
           a[1][0], a[1][1], a[1][2], a[1][3], a[1][4]);

    return 0;
}