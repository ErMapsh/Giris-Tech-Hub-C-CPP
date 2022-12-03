#include <stdio.h>

void display(int arr[3][3], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{

    // declarization with initialization
    int a[3][3] = {{15, 3, 9}, {8, 2, 7}, {6, 3, 1}};
    display(a, 3);

    printf("\n");

    // by user input
    int b[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter value for b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    display(b, 3);

    return 0;
}