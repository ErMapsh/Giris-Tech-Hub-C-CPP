#include <stdio.h>

int main()
{

    /*
     ********1******** -->
     *******2*2*******
     ******3*3*3******
     *****4*4*4*4*****
     ****5*5*5*5*5****
     */

    for (int i = 0; i < 5; i++)
    {
        int flag = 0;
        for (int j = 0; j < 17; j++)
        {
            if (j >= 8 - i && j <= 8 + i)
            {
                if (flag == 0)
                {
                    printf("%d ", i + 1);
                    flag = 1;
                }
                else
                {
                    printf("* ");
                    flag = 0;
                }
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}