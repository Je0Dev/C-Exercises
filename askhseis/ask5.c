#include <stdio.h>

int main()
{
    // S1 = {4, 10, 16, 22, ...} -> a=4, d=6
    // S2 = {1, 8, 15, 22, ...} -> a=1, d=7
    long long sum1 = 0, sum2 = 0;
    int term1 = 4, term2 = 1;
    int n = 0; // Number of terms

    do
    {
        sum1 += term1;
        sum2 += term2;

        term1 += 6; // Next term for S1
        term2 += 7; // Next term for S2
        n++;
    } while (sum2 <= sum1 + 100);

    printf("Number of terms needed: %d\n", n);
    printf("Sum of S1: %lld\n", sum1);
    printf("Sum of S2: %lld\n", sum2);

    return 0;
}
