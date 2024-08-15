#include<stdio.h>

int main ()
{
    int a;
    printf("Enter a graeter than 10, 20, 30, 40 < ");
    scanf("%d", &a);
    if (a>40){
        printf("you entered graeter than 40 < %d ", a);
    }
    else if(a>30){
        printf("you entered graeter than 30 < %d ", a);
    }
    else if(a>20){
        printf("you entered graeter than 20 < %d ", a);
    }
    else if(a>10){
        printf("you entered graeter than 10 < %d ", a);
    }
    else{
        printf("you entered a small value! (%d)", a);
    }
}