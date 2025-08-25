#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h> // Για την toupper

#define MAX_WRONG_GUESSES 6

// Συνάρτηση για την εκτύπωση της κατάστασης της κρεμάλας
void print_hangman(int wrong_guesses)
{
    printf("\n");
    printf("  +---+\n");
    printf("  |   |\n");
    printf("  O   %s\n", wrong_guesses > 0 ? "|" : "");
    printf(" /|\\  %s\n", wrong_guesses > 1 ? "|" : "");
    printf(" / \\  %s\n", wrong_guesses > 2 ? "|" : "");
    printf("      %s\n", wrong_guesses > 3 ? "|" : "");
    printf("=========\n");
}

// Συνάρτηση για την εκτύπωση της λέξης με τις παύλες και τα γράμματα που βρέθηκαν
void print_word_status(const char *word, const int *letters_guessed)
{
    printf("\nΛέξη: ");
    for (int i = 0; i < strlen(word); i++)
    {
        if (letters_guessed[word[i] - 'A'])
        {
            printf("%c ", word[i]);
        }
        else
        {
            printf("_ ");
        }
    }
    printf("\n");
}

int main()
{
    char *words[] = {"COMPUTER", "PROGRAMMING", "ALGORITHM", "UNIVERSITY", "PELOPONNESE", "GREECE"};
    int num_words = sizeof(words) / sizeof(words[0]);
    int wrong_guesses = 0;
    int letters_guessed[26] = {0}; // 0 για κάθε γράμμα του αλφαβήτου

    srand(time(NULL));

    // Επιλογή τυχαίας λέξης
    const char *secret_word = words[rand() % num_words];
    int word_len = strlen(secret_word);
    int correct_letters_found = 0;

    printf("--- Καλώς ήρθες στην Κρεμάλα! ---\n");

    // Κύρια λογική του παιχνιδιού
    while (wrong_guesses < MAX_WRONG_GUESSES && correct_letters_found < word_len)
    {
        print_word_status(secret_word, letters_guessed);
        printf("\nΛάθος προσπάθειες: %d/%d\n", wrong_guesses, MAX_WRONG_GUESSES);

        printf("Δώσε ένα γράμμα: ");
        char input_char = getchar();
        // Καθαρισμός buffer εισόδου
        while (getchar() != '\n')
            ;

        // Μετατροπή σε κεφαλαίο και έλεγχος εγκυρότητας
        if (!isalpha(input_char))
        {
            printf("Παρακαλώ δώσε μόνο γράμματα.\n");
            continue;
        }
        input_char = toupper(input_char);

        // Έλεγχος αν το γράμμα έχει ήδη δοθεί
        if (letters_guessed[input_char - 'A'])
        {
            printf("Το γράμμα '%c' το έχεις ξαναπεί!\n", input_char);
            continue;
        }

        // Σημειώνουμε το γράμμα ως "μαντεμένο"
        letters_guessed[input_char - 'A'] = 1;

        // Έλεγχος αν το γράμμα υπάρχει στη λέξη
        int found = 0;
        for (int i = 0; i < word_len; i++)
        {
            if (secret_word[i] == input_char)
            {
                found = 1;
                correct_letters_found++;
            }
        }

        if (found)
        {
            printf("Σωστά! Το γράμμα '%c' υπάρχει στη λέξη.\n", input_char);
        }
        else
        {
            printf("Λάθος! Το γράμμα '%c' δεν υπάρχει στη λέξη.\n", input_char);
            wrong_guesses++;
            print_hangman(wrong_guesses);
        }
    }

    // Τελικό αποτέλεσμα
    if (correct_letters_found == word_len)
    {
        printf("\nΣυγχαρητήρια! Βρήκες τη λέξη: %s\n", secret_word);
    }
    else
    {
        printf("\nΔυστυχώς, έχασες. Η λέξη ήταν: %s\n", secret_word);
    }

    return 0;
}
