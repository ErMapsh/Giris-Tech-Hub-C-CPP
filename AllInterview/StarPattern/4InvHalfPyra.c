#include <stdio.h>

int main()
{
    /*

        * * * * * *
        * * * * *
        * * * *
        * * *
        * *
        *

        logic is :

        how as per row, we decreasing number of rows
    */
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 1;  j <= n - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}