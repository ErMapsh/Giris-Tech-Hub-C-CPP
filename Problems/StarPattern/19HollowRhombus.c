#include <stdio.h>

/*
    ---**** ==> i = 0 ---> 3 to 6
    --*  *- ==> i = 1 ---> 2 to 5
    -*  *-- ==> i = 2 ---> 1 to 4
    ****--- ==> i = 3 ---> 0 to 3


*/

int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (((i == 0 || i == 3) && j >= 3 - i && j <= 6 - i) || (((i == 1 || i == 2) && (j == 3 - i || j == 6 - i))))
            {
                printf("*");
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