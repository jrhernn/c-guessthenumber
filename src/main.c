#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numGuess, attempts = 0;
    srand(time(NULL));
    int randomNum = rand() % 101;

    do
    {
        printf("\nWelcome, please guess a number between 1 and 100: \n");
        scanf("%d", numGuess);
        attempts++;

        if (numGuess == randomNum)
        {
            printf("Congratulations! You Win!");
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
    }
}