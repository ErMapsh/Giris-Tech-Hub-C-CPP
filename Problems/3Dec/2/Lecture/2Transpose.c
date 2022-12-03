#include <stdio.h>

int main()
{
    int a[3][3], c[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter element for a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // printing and stroing to another matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[j][i]);
            c[i][j] = a[j][i];
        }
        printf("\n");
    }
    
    printf("\n");
    // another way storing value in new array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}