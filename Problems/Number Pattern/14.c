#include <stdio.h>
/*
    123454321
    1234321
    12321
    121
    1
*/

int main()
{
    int i, j, flag, flag1;
    for (i = 0; i < 5; i++)
    {
        flag = 1;
        for (j = 0; j <= 8 - (i * 2); j++)
        {
            if (j >= 0 && j < ((9 - 1) - (i * 2)) / 2)
            {
                printf("%d", flag++);
            }
            else
            {
                /* for 5 4 3 2 1 , starts from mid for that row*/
                printf("%d", flag--);
            }
        }
        printf("\n");
    }

    return 0;
}