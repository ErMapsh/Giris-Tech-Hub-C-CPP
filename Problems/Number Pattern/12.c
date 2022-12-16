#include <stdio.h>
/*
    0        0  -> j == 1 and j == 9
    01      01  -> j == 2 and j == 8
    010    010  -> j == 3 and j == 7
    0101  0101  -> j == 4 and j == 6
    0101001010  -> j == 5 and j == 5
*/
int main()
{
    int i, j, flag, flag1;
    for (i = 0; i < 5; i++)
    {
        flag = 0, flag1 = 0;
        for (j = 0; j < 10; j++)
        {
            if ((j <= i) || (j >= 9 - i))
            {
                if (j >= 0 && j <= i)
                {
                    if (flag == 0)
                    {
                        printf("%d", flag++);
                    }
                    else
                    {
                        printf("%d", flag--);
                    }
                }
                else
                {
                    if (flag1 == 0)
                    {
                        printf("%d", flag1++);
                    }
                    else
                    {
                        printf("%d", flag1--);
                    }
                }
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