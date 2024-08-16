#include <stdio.h>

int main()
{
    char h;
    int a, b, c;
    printf("Enter an operation (+, -, *, /): ");
    scanf(" %c", &h);
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Sum is %d %c %d = ", a, h, b);
    scanf("%d", &c);
    int Q, W, E, R;
    Q =a+b;
    W =a-b;
    E =a*b;
    R =a/b;
    if (h == '+' ){
        if (c==Q){
            printf("Your Correct Ans %c %c\n", 3, 3);
        }
         else{
            printf("Your Wrong!!!!\n");
            printf("Answer: %d", Q);
        }
    }
    else if (h=='-'){
        if (c==W){
            printf("Your Correct Ans %c %c\n", 3, 3);
        }
        else {
            printf("Your Wrong!!!!\n");
            printf("Answer: %d", W);
        }
    }
    else if (h=='*'){
        if (c==E){
            printf("Your Correct Ans %c %c\n", 3, 3);
        }
        else{
            printf("Your Wrong!!!!\n");
            printf("Answer: %d", E);
        }
    }
    else if (h=='/'){
        if (c==R){
            printf("Your Correct Ans %c %c\n", 3, 3);
        }
        else{
            printf("Your Wrong!!!!\n");
            printf("Answer: %d", R);
        }
    }
    else {
        printf("OPERATION FAILED!!!!");
    }
    return 0;
}