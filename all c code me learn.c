#include <stdio.h>

int main()
{               //1st code (Hello)
    printf("HELLO! its me RK!");

                //2st code (sum)
    int a, b, c;
    a = 10;
    b = 5;
    c = a + b;
    printf("\n!!!SUMS!!!");
    printf("\n1. sum 10 + 5 = %d", c);

                //...sum ( * / + - )
    int d=12, e=6, f=2, g=20, h=5, i;
    i = d*e/f+g-h;
    printf("\n2. sum 12 * 6 / 2 + 20 - 5 = %d", i);

                //3rd code scanf (store input value)
    int L, B, T;
    printf("\n!Area of Rectangle!");
    printf("\nLENGTH = ");
    scanf("%d", &L);
    printf("Breadth = ");
    scanf("%d", &B);
    T = L*B;
    printf("LENGTH * BRAEDTH ");
    printf("\n       %d Ans", T);

              // 4th code if (< > = <= >= ==)
    int M;
    M =15;
    printf("\nA = %d", M);
    if (M>10){
        printf("\nA greater than 10!");
    }
             //...if else
    int Q;
    Q = 15;
    printf("\nQ = %d", Q);
    if (Q>20){
        printf("\nQ greater than 20");
    }
    else {
        printf("\nQ less then 20");
    }
            //if else with scanf
    int W;
    printf("\nEnter a value greater than 10,20,30,40 < ");
    scanf("%d", &W);
    if (W>40){
        printf("You Entered a value greater than 10,20,30,40");
    }
    else if (W>30){
        printf("You Entered a value greater than 10,20,30");
    }
    else if (W>20){
        printf("You Entered a value greater than 10,20");
    }
    else if (W>10){
        printf("You Entered a value greater than 10");
    }
    else {
        printf("You Entered A Small Value! (%d)", W);
    }
    return 0;

}