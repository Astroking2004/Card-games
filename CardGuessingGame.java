import java.util.Random;
import java.util.Scanner;

public class CardGuessingGame {
    private static final int NUM_CARDS = 52;

    public static void main(String[] args) {
        Random random = new Random();
        int drawnCard = random.nextInt(NUM_CARDS);

        // Get user's guess
        Scanner scanner = new Scanner(System.in);
        System.out.print("Guess the drawn card (0-51): ");
        int userGuess = scanner.nextInt();

        if (userGuess == drawnCard) {
            System.out.println("Congratulations! Your guess is correct.");
        } else {
            System.out.println("Sorry, your guess is incorrect.");
            System.out.println("The correct card was: " + drawnCard);
        }

        // Print the suit and rank of the drawn card
        int suit = drawnCard / 13;
        int rank = drawnCard % 13;

        String[] suits = {"Spades", "Hearts", "Diamonds", "Clubs"};
        String[] ranks = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};

        System.out.println("Drawn card: " + ranks[rank] + " of " + suits[suit]);

        scanner.close();
    }
}
