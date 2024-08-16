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
    else if ( M<=80 && M>=70){
        printf("Grade: %c", a='C');
    }
    else if ( M<=70 && M>=60){
        printf("Grade: %c", a='D');
    }
    else if ( M<=60 && M>=50){
        printf("Grade: %c", a='E');
    }
    else if ( M<=50 && M>=0){
        printf("Grade: %c", a='F');
    }
    else {
        printf("Please Enter a Correct Marks!!");
    }

    return 0;
}