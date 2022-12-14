#include <stdio.h>
/*
    **********
    ****  ****
    ***    ***
    **      **
    *        *
    *        *
    **      **
    ***    ***
    ****  ****
    **********


*/
int main()
{
    int i, j, k;
    for (i = 0, k = 0; i < 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            if (i == 0 || i == 9 || ((i >= 1 && i <= 4) && (j <= 5 - i) || (5 + i + 1 <= j)))
            {
                printf("*");
            }
            else if ((i >= 5) && ((j <= (6 + (2 * k)) - i) || (5 - (2 * k)) + i <= j))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        if (i >= 5)
        {
            k++;
        }
    }

    return 0;
}