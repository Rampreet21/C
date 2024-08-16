#include <stdio.h>

int main ()
{
    int a, b, c, d;
    printf("!Hii i'm RK! I'm tell you !Ans! is !Correct or Wrong!");
    printf("\n........Enter 2 Values.......\n");
    scanf("%d", &a);
    scanf("%d", &b);
    c = a + b;
    printf("Sum %d + %d = ", a, b);
    scanf("%d", &d);

    if (c==d){
        printf("Your Correct Ans!!!!");
    }
    else {
        printf("Your Wrong!!!!");
        printf("\nCorrect Ans is %d", c);

    }
    return 0;
}