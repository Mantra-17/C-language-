#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ATTEMPTS 10

void print_instructions() {
    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("Try to guess the number in %d attempts.\n", MAX_ATTEMPTS);
    printf("Good luck!\n");
}

int main() {
    int target, guess, attempts = 0;
    int guessed_correctly = 0;

    // Seed the random number generator
    srand(time(NULL));
    target = rand() % 100 + 1; // Random number between 1 and 100

    print_instructions();

    while (attempts < MAX_ATTEMPTS && !guessed_correctly) {
        printf("Enter your guess (%d/%d): ", attempts + 1, MAX_ATTEMPTS);
        scanf("%d", &guess);

        // Validate the guess
        if (guess < 1 || guess > 100) {
            printf("Please enter a number between 1 and 100.\n");
            continue;
        }

        attempts++;

        if (guess < target) {
            printf("Too low! Try again.\n");
        } else if (guess > target) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the number correctly.\n");
            guessed_correctly = 1;
        }
    }

    if (!guessed_correctly) {
        printf("Sorry! You've used all your attempts. The number was %d.\n", target);
    }

    return 0;
}
