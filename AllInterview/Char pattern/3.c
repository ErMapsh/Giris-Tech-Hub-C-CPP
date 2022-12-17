#include <stdio.h>
/*
    A
    BAB
    CBABC
    DCBABCD
    EDCBABCDE
*/
int main()
{
    int i, j;
    char ch;
    for (i = 0; i < 5; i++)
    {
        ch = 65 + i;
        for (j = 0; j < 1 + (i * 2); j++)
        {
            if (j < ((1 + (i * 2)) / 2))
                printf("%c", ch--);
            else if (j == ((1 + (i * 2)) / 2))
                printf("%c", ch);
            else
                printf("%c", ++ch);
        }
        printf("\n");
    }

    return 0;
}