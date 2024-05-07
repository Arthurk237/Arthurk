#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int goal = rand() % 50 + 1;
    int guess;
    int attempts = 0;
    int maxAttempts = 10;
    int guessedCorrectly = 0;

    printf("Welcome to the number guessing game!\n");
    printf("Guess a number between 1 and 50.\n");

    while (attempts < maxAttempts) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess == goal) {
            guessedCorrectly = 1;
            break;
        } else if (guess < goal) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }

        attempts++;
    }

    if (guessedCorrectly) {
        printf("Correct! You guessed the correct number: %d\n", goal);
        printf("You made %d attempts.\n", attempts + 1);
    } else {
        printf("Sorry,The correct number was: %d\n", goal);
    }

    return 0;
}

