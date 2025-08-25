#include <stdio.h>

int main()
{
    long long total_sum = 0;

    // Outer loop for the hundreds place (100, 200, ..., 900)
    for (int i = 100; i <= 900; i += 100)
    {
        // Inner loop for the additions (i to i+5)
        for (int j = 0; j <= 5; j++)
        {
            total_sum += (i + j);
        }
    }

    printf("The sum of the series is: %lld\n", total_sum);

    return 0;
}
