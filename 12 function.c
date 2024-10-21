#include <stdio.h>

void sum()             // NO Return OR NO Argument
{
    int a = 5, b = 5, c = a + b;
    printf("SUM of A and B = %d\n", c);
}

int sum2(int n, int m) // Return OR Argument
{
    return n + m;
}

int sum3()             // Return OR NO Argument
{                      
    int x = 20, y = 10;
    return x + y;
}

void sum4(int r, int s) // NO Return OR Argument
{ 
    int t;
    t = r + s;
    printf("SUM of R and S = %d\n", t);
}

int main()
{
    sum();           // 1st

    int a = 10, b = 10, c;
    c = sum2(a, b);  // 2nd
    printf("SUM of N and M = %d\n", c);

    int z;
    z = sum3();      // 3rd
    printf("SUM of X and Y = %d\n", z);

    int p = 30, q = 10;
    sum4(p, q);      // 4th

    return 0;
}
