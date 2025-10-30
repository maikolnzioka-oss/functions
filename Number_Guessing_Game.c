#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;

    // Seed random number generator
    srand(time(0));

    // Generate random number between 1 and 20
    secretNumber = (rand() % 20) + 1;

    printf("=====================================\n");
    printf("         NUMBER GUESSING GAME\n");
    printf("=====================================\n");
    printf("Guess the number (between 1 and 20):\n");

    // Loop until the user guesses correctly
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber)
            printf("Too high! Try again.\n");
        else if (guess < secretNumber)
            printf("Too low! Try again.\n");
        else
            printf("Congratulations! You guessed it in %d attempts.\n", attempts);

    } while (guess != secretNumber);

    printf("=====================================\n");

    return 0;
}
