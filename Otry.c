#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int randomno = (rand() % 100) + 1;
    int guessno;
    int guesses = 1;
    do
    {
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
            printf("\n        !!Congrats!!\nYou Guessed The Right Number in %d Guesses\n", guesses);
        }
        guesses++;
    } while (guessno != randomno);

    return 0;
}