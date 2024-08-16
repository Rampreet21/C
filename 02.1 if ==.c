#include <stdio.h>

int main()
{
    char a;
    int M;
    printf("Enter your Marks: ");
    scanf("%d", &M);
    if (M<=100 && M>=90){
         printf("Grade: %c", a = 'A');
    }
    else if ( M<=90 && M>=80){
        printf("Grade: %c", a='B');
    }

    return 0;
}