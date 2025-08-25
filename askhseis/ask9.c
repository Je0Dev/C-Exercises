#include <stdio.h>

#define MAX_SIZE 20

int main()
{
    int arr[MAX_SIZE];
    int count = 0;
    int input;
    double sum = 0.0;

    printf("Enter up to 20 integers (-1 to stop):\n");

    // Read numbers into the array
    for (int i = 0; i < MAX_SIZE; i++)
    {
        scanf("%d", &input);
        if (input == -1)
        {
            break;
        }
        arr[i] = input;
        count++;
    }

    // Calculate the average
    if (count > 0)
    {
        for (int i = 0; i < count; i++)
        {
            sum += arr[i];
        }
        printf("The average of the %d numbers is: %.2f\n", count, sum / count);
    }
    else
    {
        printf("No numbers were entered.\n");
    }

    return 0;
}
