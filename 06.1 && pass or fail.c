#include <stdio.h>

int main ()
{
    int marks1, marks2, marks3, T;
    printf("Enter your Marks\n");
    printf("Hindi: ");
    scanf("%d", &marks1);
    printf("English: ");
    scanf("%d", &marks2);
    printf("Math: ");
    scanf("%d", &marks3);
    printf("Your Total Marks is %d.\n", T=marks1+marks2+marks3);

    if (marks1<33 || marks2<33 || marks3<33){
        printf("You are failed due to less marks in individual subject.\n");
    }
    else if((marks1+marks2+marks3)/3 <40){
        printf("You are failed due less percentage.");         
    }
    else{
        printf("You are Passed!");
    }

    return 0;
}