#include <stdio.h>

int main ()
{
    for (int i=1; i<=10; i++){
        if (i==8){
        // break;  is exit the loop
        continue; // is skip this iteration
        }
        printf("I is %d\n",i);
    }

    return 0;
}