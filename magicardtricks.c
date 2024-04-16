#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_CARDS 52

int draw_card() {
    srand(time(NULL)); // Seed the random number generator with the current time
    return rand() % NUM_CARDS; // Generate a random index
}

int main() {
    int drawn_card = draw_card();
    
    // Get user's guess
    int user_guess;
    printf("Guess the drawn card (0-51): ");
    scanf("%d", &user_guess);
    
    if (user_guess == drawn_card) {
        printf("Congratulations! Your guess is correct.\n");
    } else {
        printf("Sorry, your guess is incorrect.\n");
        printf("The correct card was: %d\n", drawn_card);
    }
    
    // Print the suit and rank of the drawn card
    int suit = drawn_card / 13;
    int rank = drawn_card % 13;
    
    const char* suits[] = {"Spades", "Hearts", "Diamonds", "Clubs"};
    const char* ranks[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    
    printf("Drawn card: %s of %s\n", ranks[rank], suits[suit]);
    
    return 0;
}