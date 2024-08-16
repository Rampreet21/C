#include <stdio.h>

int main ()
{
    char grade;
    printf ("Eanter a: ");
    scanf("%c", &grade);
    switch(grade){
        case 'a':
        printf("You entered A\n");
        break;
        case 'b':
        printf("You entered B\n");
        break;
        case 'c':
        printf("YOU entered C\n");
        break;
        case 'd':
        printf("YOU entered D\n");
        break;
        default:
        printf("NOTHING!!!!\n");
    }

    return 0;
}