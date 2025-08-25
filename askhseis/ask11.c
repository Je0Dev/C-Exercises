#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS 1000

int main()
{
    int zari[ROLLS];
    int odd_count = 0;
    int le_2_count = 0; // Less than or equal to 2
    int consecutive_count = 0;

    srand(time(NULL));

    // Simulate 1000 dice rolls
    for (int i = 0; i < ROLLS; i++)
    {
        zari[i] = (rand() % 6) + 1; // Random number between 1 and 6
    }

    // Analyze the results
    for (int i = 0; i < ROLLS; i++)
    {
        // a) Count odd results
        if (zari[i] % 2 != 0)
        {
            odd_count++;
        }

        // b) Count results <= 2
        if (zari[i] <= 2)
        {
            le_2_count++;
        }

        // c) Count consecutive same results (check from the second roll)
        if (i > 0 && zari[i] == zari[i - 1])
        {
            consecutive_count++;
        }
    }

    // Print the statistics
    printf("--- Dice Roll Statistics (1000 rolls) ---\n");
    printf("a) Total odd results: %d\n", odd_count);
    printf("b) Total results less than or equal to 2: %d\n", le_2_count);
    printf("c) Total consecutive same results: %d\n", consecutive_count);

    return 0;
}
