#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int count = 0;
    int input;

    printf("Enter the first number: ");
    if (scanf("%d", &input) == 1)
    {
        arr[count++] = input; // Store the first number
    }

    // Loop to get subsequent numbers
    while (count < MAX_SIZE)
    {
        printf("Enter the next number: ");
        if (scanf("%d", &input) != 1)
        {
            break; // Break if input is not an integer
        }

        // Store only if the new number is smaller than the previous one
        if (input < arr[count - 1])
        {
            arr[count++] = input;
        }
        else
        {
            printf("The number must be smaller than the previous one (%d). Try again.\n", arr[count - 1]);
        }
    }

    // Print the stored numbers
    printf("\nStored numbers:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
