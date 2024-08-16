#include <stdio.h>
// #include<conio.h>
int main()
{
    // int a= 1, b= 0;
    int a, b;
    printf("Enter 1 and 0: ");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("a && b: %d\n", a&&b);
    printf("a || b: %d\n", a||b);
    printf("a !NOT b: %d\n", !a);
    return 0;
}