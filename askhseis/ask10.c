#include <stdio.h>

int main()
{
    int a[3][3];
    int min_val, max_diag_val;
    int min_row, min_col;

    // A) Read and store integers in the 3x3 array
    printf("Enter 9 integers for the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // A) Display the matrix
    printf("\nThe matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%4d ", a[i][j]);
        }
        printf("\n");
    }

    // B) Find the minimum element and its position
    min_val = a[0][0];
    min_row = 0;
    min_col = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] < min_val)
            {
                min_val = a[i][j];
                min_row = i;
                min_col = j;
            }
        }
    }
    printf("\nMinimum element is %d at position (row=%d, col=%d).\n", min_val, min_row, min_col);

    // C) Find the maximum element of the main diagonal
    max_diag_val = a[0][0];
    for (int i = 1; i < 3; i++)
    {
        if (a[i][i] > max_diag_val)
        {
            max_diag_val = a[i][i];
        }
    }
    printf("Maximum element of the main diagonal is %d.\n", max_diag_val);

    return 0;
}
