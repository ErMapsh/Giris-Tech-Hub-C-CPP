#include <stdio.h>
/*
    ____5
    ___4 5
    __3 4 5
    _2 3 4 5
    1 2 3 4 5

    ____1
    ___1 2
    __1 2 3
    _1 2 3 4
    1 2 3 4 5

    ____1
    ___1 2
    __1   3
    _1     4
    1 2 3 4 5

*/
int main()
{
    // int n = 5;

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 1, k = 1; j <= n; j++)
        {
            if (j == n - i || j == n || i == n - 1)
            {
                printf("%d ", k);
                k++;
            }
            else if (j > n - i && j < n)
            {
                printf("  ");
                k++;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}