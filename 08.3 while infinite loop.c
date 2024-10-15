#include <stdio.h>
#include <unistd.h>
int main() {
    int a=1;

    while (0<2){
        printf("\rThe Value of I is %d",a);
        a++;
        sleep(1);
    }
    
    return 0;
}
