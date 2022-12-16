#include <stdio.h>
/*
    1        1  -> j == 1 and j == 9
    22      22  -> j == 2 and j == 8
    333    333  -> j == 3 and j == 7
    4444  4444  -> j == 4 and j == 6
    5555555555  -> j == 5 and j == 5


    1        1
    12      21
    123    321
    1234  4321
    1234554321

*/
int main()
{
    int i, j, flag, flag1;
    for (i = 0; i < 5; i++)
    {
        flag = 1, flag1 = i + 1;
        for (j = 0; j < 10; j++)
        {
            if ((j <= i) || (j >= 9 - i))
            {
                if (j >= 0 && j <= i)
                {
                    printf("%d", flag++);
                }
                else
                {
                    printf("%d", flag1--);
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