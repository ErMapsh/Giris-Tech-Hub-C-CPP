#include <stdio.h>

int main()
{

    /*

     * * * * *
     * * * * *
     * * * * *

     */

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n - 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}