#include <stdio.h>

int main(){

    int b=0, a;
    printf("Enter Value: ");
    scanf("%d", &a);
    while (a>b){
        printf("The Value of I is %d\n", a);
        a--;
    }

    return 0;
}