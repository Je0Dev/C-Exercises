#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 5
#define COLS 4

int main()
{
    int matrix[ROWS][COLS];
    srand(time(NULL));

    // Fill the matrix
    for (int i = 0; i < ROWS; i++)
    {
        int row_sum = 0;
        // Generate random values for the first COLS-1 columns
        for (int j = 0; j < COLS - 1; j++)
        {
            matrix[i][j] = rand() % 101; // Random number between 0 and 100
            row_sum += matrix[i][j];
        }
        // Set the last element to make the sum 100
        matrix[i][COLS - 1] = 100 - row_sum;
    }

    // Print the matrix and verify row sums
    printf("Generated Matrix:\n");
    for (int i = 0; i < ROWS; i++)
    {
        int sum = 0;
        for (int j = 0; j < COLS; j++)
        {
            printf("%4d ", matrix[i][j]);
            sum += matrix[i][j];
        }
        printf("| Sum = %d\n", sum);
    }

    return 0;
}
