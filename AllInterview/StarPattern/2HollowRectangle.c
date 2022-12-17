#include <stdio.h>

int main()
{
    /*

        * * * * *
        *       *
        * * * * *

        here logic is
        first and last row having all num of start
        middle of rows are having 1 start at start and end
    */

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n - 2; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n - 2 || j == 1 || j == n)
            {
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}