#include <stdio.h>

int main()
{
    int x = 21, y = 0xa, z = 077; // Initialize variables: x=21, y=10 (hexadecimal), z=63 (octal)

    // Desired output: 21
    printf("%d\n", x); // %d for decimal integer

    // Desired output: 21
    printf("%i\n", x); // %i also for decimal integer

    // Desired output: 15
    printf("%x\n", x); // %x for hexadecimal (21 in decimal is 15 in hex)

    // Desired output: 25%
    printf("%o%%\n", x); // %o for octal (21 in decimal is 25 in octal), %% for a literal '%' sign

    // Desired output: A
    printf("%X\n", y); // %X for uppercase hexadecimal (10 in decimal is A in hex)

    // Desired output: a
    printf("%x\n", y); // %x for lowercase hexadecimal (10 in decimal is a in hex)

    // Desired output: 10
    printf("%d\n", y); // %d for decimal (0xa is 10 in decimal)

    // Desired output: 77
    printf("%o\n", z); // %o for octal (z was defined as octal 077)

    // Desired output: 077
    printf("%#o\n", z); // %#o for octal with a leading 0

    // Desired output: 63
    printf("%d\n", z); // %d for decimal (077 in octal is 63 in decimal)

    return 0;
}
