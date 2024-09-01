#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // randmon number genrater
    srand(time(0));

    printf("Game: Truth and Dare\n");
    printf("1. Start\n");
    printf("2. Quit\n");
    int input;

    do{
    int randno = rand() % 2;
        printf("Enter 1or2: ");
        scanf("%d", &input);
        if(input==2){
            break;
        }
        else if(randno==0){
        printf("TRUTH\n");
    }
    else{
        printf("DARE\n");
    }
    }while (input==1);

    return 0;
}