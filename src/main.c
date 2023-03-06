#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numGuess, attempts = 0;
    srand(time(NULL));
    int randomNum = rand() % 101;

    printf("Welcome! Please guess a number between 1 and 100\n");

    do
    {
        printf("\nEnter your guess: \n");
        scanf("%d", &numGuess);
        attempts++;

        if (numGuess == randomNum)
        {
            printf("Congratulations! You Win!\n");
            return 0;
        }
        else if (numGuess > randomNum)
        {
            printf("Too High!\n");
        }
        else
        {
            printf("Too Low!\n");
        }
    } while (attempts < 10);
    printf("You Lose! All 10 attempts used\n");
}