#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numGuess, attempts = 0;
    // Seed random number generator
    srand(time(NULL));
    // Generate random number between 1 and 100
    int randomNum = rand() % 101;
    printf("Welcome! Please guess a number between 1 and 100\n");

    do
    {
        printf("\nEnter your guess: \n");
        scanf("%d", &numGuess);
        attempts++; // Increments the attempts by 1

        // When the user guess is the correct number
        if (numGuess == randomNum)
        {
            printf("Congratulations! You Win!\n");
            return 0;
        }
        // When the user guess is higher the correct number
        else if (numGuess > randomNum)
        {
            printf("Too High!\n");
        }
        else // When the usesr guess is too low
        {
            printf("Too Low!\n");
        }
        // While loop that quits after the 10th attempt
    } while (attempts < 10);
    printf("You Lose! All 10 attempts used\n");
}