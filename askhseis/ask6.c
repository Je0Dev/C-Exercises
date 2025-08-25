#include <stdio.h>
#include <float.h> // For DBL_MAX

int main()
{
    double numbers[100];
    double min1 = DBL_MAX, min2 = DBL_MAX;

    printf("Enter 100 real numbers:\n");
    for (int i = 0; i < 100; i++)
    {
        scanf("%lf", &numbers[i]);
    }

    // Find the two smallest distinct values
    for (int i = 0; i < 100; i++)
    {
        if (numbers[i] < min1)
        {
            min2 = min1;
            min1 = numbers[i];
        }
        else if (numbers[i] < min2 && numbers[i] != min1)
        {
            min2 = numbers[i];
        }
    }

    if (min2 == DBL_MAX)
    {
        printf("Could not find two distinct minimum values.\n");
    }
    else
    {
        printf("The two smallest distinct values are: %f and %f\n", min1, min2);
    }

    return 0;
}
