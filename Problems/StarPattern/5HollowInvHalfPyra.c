#include <stdio.h>

int main()
{
    /*

        * * * * * *
        *       *
        *     *
        *   *
        * *
        *

        logic is : first row having all start corresponding to its num;
        from second row to n-1, first element having start, then corresponding to inverted half pyramid we have to print last *  

    */
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            if (i == 0 || j == 1 || j == n - i)
            {
                printf("* ");
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