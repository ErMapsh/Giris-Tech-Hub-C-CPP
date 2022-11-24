#include <stdio.h>

int main()
{
    // 20. Write a C program to print all ASCII character with their values.
    // The ASCII table has 256 characters, with values from 0 through 255

    for (int i = 0; i < 256; i++)
    {
        printf("%c = %d\n", i, i);
    }
    return 0;
}