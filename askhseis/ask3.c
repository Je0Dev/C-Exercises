#include <stdio.h>

int main()
{
    int num;
    int positive_count = 0, negative_count = 0;
    int positive_sum = 0, negative_sum = 0;
    int odd_sum = 0, even_sum = 0;

    printf("Enter integers (0 to stop):\n");

    while (1)
    {
        scanf("%d", &num);
        if (num == 0)
        {
            break; // Exit loop if 0 is entered
        }

        // Check for positive or negative
        if (num > 0)
        {
            positive_count++;
            positive_sum += num;
        }
        else
        {
            negative_count++;
            negative_sum += num;
        }

        // Check for odd or even
        if (num % 2 == 0)
        {
            even_sum += num;
        }
        else
        {
            odd_sum += num;
        }
    }

    // Print the results
    printf("\n--- Results ---\n");
    printf("Positive numbers count: %d\n", positive_count);
    printf("Negative numbers count: %d\n", negative_count);
    printf("Sum of positive numbers: %d\n", positive_sum);
    printf("Sum of negative numbers: %d\n", negative_sum);
    printf("Sum of odd numbers: %d\n", odd_sum);
    printf("Sum of even numbers: %d\n", even_sum);

    return 0;
}
