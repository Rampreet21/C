#include <stdio.h>

int main()
{               // single string
    char b[] = "Rampreetrr";
    printf("%s\n", b);

                // Character 2D Array
    char a[2][9] = {"Rampreet", "Harpreet"};
    printf("%s %s\n", a[0], a[1]);

    char c[1][9];
    scanf("%s", c);
    printf("%s \n", c[0]);


    return 0;
}