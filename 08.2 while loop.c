#include <stdio.h>

int main(){

    int a=0, b;
    printf("How Many Times Do You Wanna Print:");
    scanf("%d", &b);
    while (a<b){
        printf("Happy Birthday!!\n");
        a = a+1;
    }

    return 0;
}