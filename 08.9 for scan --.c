#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for (int i = 10; i; i--)
    {
        printf("%d X %d: %d\n",a,i,a*i);
    }
    

    return 0;
}