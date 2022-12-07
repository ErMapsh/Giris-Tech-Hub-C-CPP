#include <stdio.h>

int main()
{
    int a[3][3] = {{5, 10, 8},
                   {12, 3, 25},
                   {1, 6, 9}},
        midCol = 0, midRow = 0, i, j;

    for (i = 0; i <= 2; i++)
    {
        for (j = 1; j <= 1; j++)
        {
            if (i >= 0 && j == 1)
            {
                midCol += a[i][j];
                printf("%d", a[i][j]);
            }
        }
        if (i <= 1)
            printf(" + ");
    }
    printf(" = %d\n", midCol);

    // midrow
    for (i = 1; i <= 1; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            if (i == 1 && j >= 0)
            {
                midRow += a[i][j];
                printf("%d", a[i][j]);
            }

            if (j <= 1)
            {
                printf(" + ");
            }
        }
    }

    printf(" = %d\n", midRow);

    return 0;
}