#include <stdio.h>

int main()
{
    int n = 5;

    // int n;
    // printf("Enter a number: ");
    // scanf("%d", &n);

    /*
        1 2 3 4 5
        2 3 4 5
        3 4 5
        4 5
        5

        1 2 3 4 5
        2     5
        3   5
        4 5
        5
    */
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (i == 0 || j == i + 1 || j == n)
            {
                printf("%d ", j);
            }
            else // (j < i + 1 && j > n)
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}