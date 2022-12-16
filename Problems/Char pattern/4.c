#include <stdio.h>
/*
    A
    ABA
    ABCBA
    ABCDCBA
    ABCDEDCBA
*/
int main()
{
    int i, j;
    char ch;
    for (i = 0; i < 5; i++)
    {
        ch = 'A';
        for (j = 0; j < 1 + (i * 2); j++)
        {
            if (j < ((1 + (i * 2)) / 2))
                printf("%c", ch++);
            else if (j == ((1 + (i * 2)) / 2))
                printf("%c", ch);
            else
                printf("%c", --ch);
        }
        printf("\n");
    }

    return 0;
}