#include <stdio.h>
/*

   *****
   ******
   *******
   ********
   *********
   ********  --> i= 5 --> j<=7
   *******   --> i= 6 --> j<=6
   ******    --> i= 7 --> j<=5
   *****     --> i= 8 --> j<=4

       *
        *
         *
          *
   *********
          *
         *
        *
       *

*/
int main()
{
    int i, j, k;
    for (i = 0, k = 1; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if ((i <= 3 && j == (9 / 2) + i) || i == (9 / 2)|| (i >= 5 && j == 12-i) 
            )
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