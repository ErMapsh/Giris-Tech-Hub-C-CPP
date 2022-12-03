#include <stdio.h>

int display(int arr[2][3])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a[2][3], b[2][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter value for a[i][j]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    display(a);
    printf("\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter value for b[i][j]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    display(b);
    printf("\n");

    printf("\n------The addition of matrix is------\n");
    int c[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    display(c);
    return 0;
}