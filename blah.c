#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function prototypes
void playRPS();
void playLHT();
void playBBG();
int getRandomChoice(int max);

int main() {
    int choice;

    // Seed random number generator
    srand(time(NULL));

    printf("Welcome to the Multi-Game Arena!\n");

    while (1) {
        // Display menu
        printf("\nChoose the game you want to play:\n");
        printf("1. Rock-Paper-Scissors\n");
        printf("2. Lady-Hunter-Tiger\n");
        printf("3. Bomb-Building-Gun\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        // Process the user's choice
        switch (choice) {
            case 1:
                playRPS();
                break;
            case 2:
                playLHT();
                break;
            case 3:
                playBBG();
                break;
            case 4:
                printf("Thank you for playing! Goodbye!\n");
                return 0; // Exit the program
            default:
                printf("Invalid choice! Please enter a valid option (1-4).\n");
        }
    }

    return 0;
}

// Random choice generator
int getRandomChoice(int max) {
    return rand() % max; // Returns a random number from 0 to max-1
}

// Rock-Paper-Scissors game logic
void playRPS() {
    const char *options[] = {"Rock", "Paper", "Scissors"};
    int userChoice, computerChoice;

    printf("\nRock-Paper-Scissors:\n");
    printf("0. Rock\n1. Paper\n2. Scissors\n");
    printf("Enter your choice (0-2): ");
    if (scanf("%d", &userChoice) != 1 || userChoice < 0 || userChoice > 2) {
        printf("Invalid input! Please restart the game and enter a valid choice.\n");
        return;
    }

    computerChoice = getRandomChoice(3);
    printf("You chose: %s\n", options[userChoice]);
    printf("Computer chose: %s\n", options[computerChoice]);

    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 0 && computerChoice == 2) ||
               (userChoice == 1 && computerChoice == 0) ||
               (userChoice == 2 && computerChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("You lose!\n");
    }
}

// Lady-Hunter-Tiger game logic
void playLHT() {
    const char *options[] = {"Lady", "Hunter", "Tiger"};
    int userChoice, computerChoice;

    printf("\nLady-Hunter-Tiger:\n");
    printf("0. Lady\n1. Hunter\n2. Tiger\n");
    printf("Enter your choice (0-2): ");
    if (scanf("%d", &userChoice) != 1 || userChoice < 0 || userChoice > 2) {
        printf("Invalid input! Please restart the game and enter a valid choice.\n");
        return;
    }

    computerChoice = getRandomChoice(3);
    printf("You chose: %s\n", options[userChoice]);
    printf("Computer chose: %s\n", options[computerChoice]);

    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 0 && computerChoice == 1) ||
               (userChoice == 1 && computerChoice == 2) ||
               (userChoice == 2 && computerChoice == 0)) {
        printf("You win!\n");
    } else {
        printf("You lose!\n");
    }
}

// Bomb-Building-Gun game logic
void playBBG() {
    const char *options[] = {"Bomb", "Building", "Gun"};
    int userChoice, computerChoice;

    printf("\nBomb-Building-Gun:\n");
    printf("0. Bomb\n1. Building\n2. Gun\n");
    printf("Enter your choice (0-2): ");
    if (scanf("%d", &userChoice) != 1 || userChoice < 0 || userChoice > 2) {
        printf("Invalid input! Please restart the game and enter a valid choice.\n");
        return;
    }

    computerChoice = getRandomChoice(3);
    printf("You chose: %s\n", options[userChoice]);
    printf("Computer chose: %s\n", options[computerChoice]);

    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 0 && computerChoice == 2) ||
               (userChoice == 1 && computerChoice == 0) ||
               (userChoice == 2 && computerChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("You lose!\n");
    }
}