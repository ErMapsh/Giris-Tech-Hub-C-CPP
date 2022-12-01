#include <stdio.h>

int main()
{
    /*

        *
        * *
        * * *
        * * * *
        * * * * *
        * * * * * *

        logic is :

        how we iterate a row, thats like num of row and num of star printing
    */
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}