#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_TRIES 6
#define MAX_WORD_LENGTH 20

int main() {
    char word[MAX_WORD_LENGTH];
    char guessed[MAX_WORD_LENGTH];
    int tries = 0;
    int correct = 0;

    printf("Welcome to Hangman!\n");

    // Get the word to guess
    printf("Enter the word to guess: ");
    scanf("%s", word);

    // Clear the input buffer
    while (getchar() != '\n');

    // Convert the word to lowercase
    for (int i = 0; i < strlen(word); i++) {
        word[i] = tolower(word[i]);
    }

    // Initialize the guessed array with underscores
    memset(guessed, '_', strlen(word));
    guessed[strlen(word)] = '\0';

    // Game loop
    while (tries < MAX_TRIES && correct < strlen(word)) {
        char guess;
        int found = 0;

        printf("\nWord: %s\n", guessed);
        printf("Tries left: %d\n", MAX_TRIES - tries);
        printf("Enter your guess: ");
        scanf(" %c", &guess);

        // Clear the input buffer
        while (getchar() != '\n');

        guess = tolower(guess);

        // Check if the guess is correct
        for (int i = 0; i < strlen(word); i++) {
            if (word[i] == guess) {
                guessed[i] = guess;
                found = 1;
                correct++;
            }
        }

        if (!found) {
            tries++;
            printf("Incorrect guess!\n");
        }
    }

    // Game over
    printf("\nWord: %s\n", guessed);

    if (correct == strlen(word)) {
        printf("Congratulations! You guessed the word!\n");
    } else {
        printf("Game over! You ran out of tries. The word was %s.\n", word);
    }

    return 0;
}