#include <stdio.h>
/*
    ABCDEDCBA  --> 0 to 4 & 4 to 8 --->
    ABCD DCBA  --> 0 to 3 & 5 to 8 --->
    ABC   CBA  --> 0 to 2 & 6 to 8 --->
    AB     BA  --> 0 to 1 & 7 to 8 --->
    A       A  --> 0 to 0 & 8 to 8 --->


*/
int main()
{
    int i, j;
    char flag, flag1;
    for (i = 0; i < 5; i++)
    {
        flag = 'A', flag1 = 'D';
        for (j = 0; j < 9; j++)
        {
            if (j <= 4 - i)
            {
                printf("%c", flag++);
            }
            else if (j >= 4 + i)
            {
                if (i == 0)
                {
                    printf("%c", flag1--);
                }
                else
                {
                    printf("%c", --flag);
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