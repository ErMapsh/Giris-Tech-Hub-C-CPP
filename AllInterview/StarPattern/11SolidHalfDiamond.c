/*

*
**
***
****
*****
****
***
**
*

*/

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i == 5 || (i <= 4 && j <= i) || (i >= 6 && j <= 10 - i))
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}