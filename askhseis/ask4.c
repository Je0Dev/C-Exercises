#include <stdio.h>

int main()
{
    int a, b, c, choice;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("\nSelect an option:\n");
    printf("1: Check if all integers are different.\n");
    printf("2: Check if two integers are equal.\n");
    printf("3: Count how many integers are in the range [-3, 3].\n");
    printf("Your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        if (a != b && a != c && b != c)
        {
            printf("All three integers are different.\n");
        }
        else
        {
            printf("Not all integers are different.\n");
        }
        break;
    case 2:
        if (a == b || a == c || b == c)
        {
            printf("There are at least two equal integers.\n");
        }
        else
        {
            printf("No two integers are equal.\n");
        }
        break;
    case 3:
    {
        int count = 0;
        if (a >= -3 && a <= 3)
            count++;
        if (b >= -3 && b <= 3)
            count++;
        if (c >= -3 && c <= 3)
            count++;
        printf("%d integer(s) are in the range [-3, 3].\n", count);
    }
    break;
    default:
        printf("Invalid choice.\n");
        break;
    }

    return 0;
}
