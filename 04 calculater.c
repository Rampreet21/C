#include <stdio.h>

int main()
{
    char h;
    int a, b, f;
    printf("Enter an operation (+, -, *, /): ");
    scanf(" %c", &h);
    scanf("%d", &a);
    scanf("%d", &b);
    if (h == '+' ){
        printf("Result: %d", f= a+b);
    }
    else if (h=='-'){
        printf("Result: %d", f=a-b);
    }
    else if (h=='*'){
        printf("Result: %d", f=a*b);
    }
    else if (h=='/'){
        printf("Result: %d", f=a/b);
    }
    else {
        printf("OPERATION FAILED!!!!");
    }
    return 0;
}