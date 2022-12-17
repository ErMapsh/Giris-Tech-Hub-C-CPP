#include <stdio.h>
/*
     - - - 1 - - -
     - - 2 2 2 - -
     - 3 3 3 3 3 -
     4 4 4 4 4 4 4

     - - - 1 - - -
     - - 2 - 3 - -
     - 4 - 5 - 6 -
     7 - 8 - 9 - 10
*/
int main()
{
    int i, j, k = 1, flag;
    for (i = 0; i < 4; i++)
    {
        flag = 0;
        for (j = 0; j <= 7; j++)
        {
            if (j >= 3 - i && j <= 3 + i)
            {
                if (flag == 0)
                {
                    printf("%d ", k++);
                    flag = 1;
                }
                else
                {
                    printf("  ");
                    flag = 0;
                }
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}