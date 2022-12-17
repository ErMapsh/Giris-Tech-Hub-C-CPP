#include <stdio.h>

/*
    A
    B C
    D E F
    G H I J
    K L M N O
*/

int main()
{
    int i, j;
    char ch = 'A';
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c ", ch++);
        }
        printf("\n");
    }

    return 0;
}