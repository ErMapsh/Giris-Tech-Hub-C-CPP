#include <stdio.h>

int main()
{
    /*
      * * * * * *
      -* * * * *
      --* * * *
      ---* * *
      ----* *
      -----*
    */

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= n; j++)
        {   
            // if n = 6
            // ( 1<= 1 || 2 || 3 || 4 || 5 || 6)
            // ( 2<= 2 || 3 || 4 || 5 || 6)
            // ( 3<= 3 || 4 || 5 || 6)
            // ( 4<= 4 || 5 || 6)
            // ( 5<= 5 || 6)
            // ( 6<= 6)
            if (i <= j) // star row number se start hona cha
            {
                printf("* ");
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