#include <stdio.h>

/*

    *                 *
    * *             * *
    * * *         * * *
    * * * *     * * * *
    * * * * * * * * * *
    * * * * * * * * * *
    * * * *     * * * *
    * * *         * * *
    * *             * *
    *                 *

*/
int main()
{
    int i, j, k, n;
    printf("Enter value for Your butterfly: ");
    scanf("%d", &n);

    for (i = 0, k = 0; i < n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == (n / 2) - 1 || i == n / 2)
            {
                printf("* ");
            }
            // for 0 to 3 print *
            else if ((i >= 0 && i <= (n / 2) - 2) && ((j <= i + 1) || (n - i <= j)))
            {
                printf("* ");
            }
            // for 6 to 9 print *
            else if (i >= (n / 2) + 1 && (j <= n - i || i + 1 <= j))
            {
                printf("* ");
            }
            // between space 0 to 3 print
            else if (((i >= 0 && i <= (n / 2) - 2) && (j > i + 1) && (j < n - i)))
            {
                printf("  ");
            }
            // between space 6 to 9 print space
            else if (i >= (n / 2) + 1 && (n - i < j) && (i + 1 > j))
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}