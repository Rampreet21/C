#include <stdio.h>

int main()
{
    char h;
    int a, b, f, c;
    printf("Enter an operation (+, -, *, /): ");
    scanf(" %c", &h);
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Sum is %d %c %d = ", a, h, b);
    scanf("%d", &c);
    int d=a+b;
    if (c==d){
        printf("Your Correct Ans!!!!\n");
    }
    else {
        printf("Your Wrong!!!!\n");
    }
    if (h == '+' ){
            printf("Answer: %d", f= a+b);        
    }
    else if (h=='-'){
        printf("Answer: %d", f=a-b);
    }
    else if (h=='*'){
        printf("Answer: %d", f=a*b);
    }
    else if (h=='/'){
        printf("Answer: %d", f=a/b);
    }
    else {
        printf("OPERATION FAILED!!!!");
    }
    return 0;
}