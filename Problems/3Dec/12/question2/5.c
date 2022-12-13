#include <stdio.h>
#include <stdlib.h>

void setupValue(int a[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the value for a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void Display(int a[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

int Match(int a[3][3], int b[3][3])
{
    int flag = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] != b[i][j])
            {
                flag = 1;
                break;
            }
        }
    }
    flag == 0 ? printf("Matrices are same") : printf("Matrices are not same");
}

int main()
{

    int a[3][3], b[3][3];

    printf("\nEnter the value for Matrix A:\n");
    setupValue(a);
    printf("Matrix A:\n");
    Display(a);

    printf("\nEnter the value for Matrix B:\n");
    setupValue(b);
    printf("Matrix B:\n");
    Display(b);
    Match(a, b);
    return 0;
}