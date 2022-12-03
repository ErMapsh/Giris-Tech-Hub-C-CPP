#include <stdio.h>

void display(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
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

    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
        b[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, c[3][3], sum;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = 0;
            for (int k = 0; k < 3; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }

    display(c);
    return 0;
}