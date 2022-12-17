#include <stdio.h>
/*


        *
       ***
      * * *
     *  *  *
    *********
     *  *  *
      * * *
       ***
        *


*/
int main()
{
    int i, j, k = 1;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (i == 4 || j == (9 / 2) || (i <= 3 && (j == (9 / 2) - i || j == (9 / 2) + i)) || (i >= 5 && (j == k || j == 9 - 1 - k)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        if (i >= 5)
        {
            k++;
        }
        printf("\n");
    }

    return 0;
}