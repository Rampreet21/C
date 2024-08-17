#include <stdio.h>

int main(){

    int a=0, b;
    printf("Enter Value: ");
    scanf("%d", &b);
    while (a<b){
        printf("The Value of I is %d\n", a);
        a++;
    }

    return 0;
}