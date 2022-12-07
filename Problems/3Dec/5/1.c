#include <stdio.h>

int main(int argc, char const *argv[])
{

    /*
    int a[3][3];
    printf("---Enter the value for matrix---\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the value for a[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    */

    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, ld = 0, rd = 0;

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            if (2 - i == j)
            {
                rd += a[i][j];
            }
            if (i == j)
            {
                ld += a[i][i];
            }
        }
    }

    printf("Right Diagonal is %d\n", rd);
    printf("Left Diagonal is %d\n", ld);

    return 0;
}