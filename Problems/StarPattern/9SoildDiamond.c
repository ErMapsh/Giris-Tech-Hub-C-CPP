#include <stdio.h>

int main()
{
    /*
        ____*
        ___* *
        __* * *
        _* * * *
        * * * * *
        * * * * *
        _* * * *
        __* * *
        ___* *
        ____*

    */

    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if ((i <= 4 && j >= 5 - 1 - i) || (i >= 5 && j >= i - 5))
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}