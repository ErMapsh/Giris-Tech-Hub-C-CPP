#include <stdio.h>

/*

    *
    * 1 *
    * 1 2 1 *
    * 1 2 3 2 1 *
    * 1 2 1 *  --> 4 ---> space re 5 =     9 - i - l   --> l start from 0;
    * 1 *  ----> 5 ---> space re 3
    *   ----> 6 ---> space re 1

*/

int main()
{

    for (int i = 0, k = 1, l = 0; i < 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (j == 1 || j == 1 + (2 * i))
            {
                printf("* ");
            }
            else if (i <= 3 && j <= 1 + (2 * i))
            {
                if (j >= 1 + (2 * i) / 2)
                {
                    printf("%d ", k--);
                }
                else
                {
                    printf("%d ", k++);
                }
            }
            else if (i >= 4 && j <= 9 - i - l)
            {
                if (j <= (9 - i - l) / 2)
                {
                    printf("%d ", k++);
                }
                else
                {
                    if (j == ((9 - i - l)))
                    {
                        printf("* ");
                    }
                    else
                    {

                        printf("%d ", k--);
                    }
                }
            }
        }

        k = 1;
        if (i >= 4)
        {
            l++;
        }
        printf("\n");
    }

    return 0;
}