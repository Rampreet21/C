#include <stdio.h>
// #include<conio.h>
int main()
{
    int a, b, c;            
    printf("Length = ");
    scanf("%d", &a); 
    printf("Breadth = ");
    scanf("%d", &b);  
    c = a * b;
    printf("Total = %d", c);
    return 0;
}