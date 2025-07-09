#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // For getch() (Windows only)

// Function to get masked input
int getMaskedInput() {
    char input;
    printf("Enter your choice (1 for 🪨 Rock, 2 for 📄 Paper, 3 for ✂ Scissors): ");
    input = getch(); // Reads a single character without showing it
    printf("*\n");   // Mask the input with an asterisk
    return input - '0'; // Convert char to int
}

// Function to determine the winner
void determineWinner(int p1, int p2) {
    if (p1 == p2) {
        printf("It's a tie!\n");
    } else if ((p1 == 1 && p2 == 3) || (p1 == 2 && p2 == 1) || (p1 == 3 && p2 == 2)) {
        printf("Player 1 wins!\n");
    } else {
        printf("Player 2 wins!\n");
    }
}

// Function to display the choice with emojis
const char* getChoiceEmoji(int choice) {
    switch (choice) {
        case 1: return "🪨 Rock";
        case 2: return "📄 Paper";
        case 3: return "✂ Scissors";
        default: return "Invalid";
    }
}

int main() {
    int player1Choice, player2Choice;

    printf("Welcome to the Rock-Paper-Scissors Game with Emojis!\n");

    // Player 1 input
    printf("Player 1, it's your turn:\n");
    player1Choice = getMaskedInput();
    system("cls"); // Clear screen after Player 1's turn

    // Player 2 input
    printf("Player 2, it's your turn:\n");
    player2Choice = getMaskedInput();
    system("cls"); // Clear screen after Player 2's turn

    // Display choices
    printf("Player 1 chose: %s\n", getChoiceEmoji(player1Choice));
    printf("Player 2 chose: %s\n", getChoiceEmoji(player2Choice));

    // Determine winner
    determineWinner(player1Choice, player2Choice);

    return 0;
}