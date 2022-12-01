#include <stdio.h>

int main()
{
    /*
        1 2 3 4 5
        1 2 3 4
        1 2 3
        1 2
        1
    */
    int n;
    printf("Enter a num: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    // /* another way */
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (j <= n - i)
    //         {
    //             printf("%d ", j);
    //         }
    //         else
    //         {
    //             break;
    //         }
    //     }
    //     printf("\n");
    // }
    return 0;
}