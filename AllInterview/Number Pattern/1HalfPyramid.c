#include <stdio.h>

int main()
{
    /*
        1
        1 2
        1 2 3
        1 2 3 4
        1 2 3 4 5
    */
    int n;
    printf("Enter a num: ");
    scanf("%d", &n);

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d ", j);
    //     }
    //     printf("\n");
    // }

    /* another way */
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= i)
            {
                printf("%d ", j);
            }
            else
            {
                // printf("\nyes i m");
                break;
            }
        }
        printf("\n");
    }
    return 0;
}