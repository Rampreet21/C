#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int randomno = (rand() % 10) + 1;
    int guessno;
    int guesses = 1;
    // do
    // {
        // printf("\nGuess number: ");
        // scanf("%d", &guessno);
        // if (guessno < randomno)
        // {
        //     printf("Higher Number!! ");
        // }
        // else if (guessno > randomno)
        // {
        //     printf("Less Number!!");
        // }
        // else
        // {
        //     printf("    !!Congrats!!\nYou Guess Right Number in %d Guesses", guesses);
        // }
        // guesses++;
    // } 
    
    while (guessno != randomno){
        printf("\nGuess number: ");
        scanf("%d", &guessno);
        if (guessno < randomno)
        {
            printf("Higher Number!! ");
        }
        else if (guessno > randomno)
        {
            printf("Less Number!!");
        }
        else
        {
            printf("    !!Congrats!!\nYou Guess Right Number in %d Guesses", guesses);
        }
        guesses++;
    }

    return 0;
}