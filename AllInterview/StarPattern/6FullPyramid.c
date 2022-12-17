#include <stdio.h>

int main()
{
    /*
      -----*
      ----* *
      ---* * *
      --* * * *
      -* * * * *
      * * * * * *
    */

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) // for some confition i took i = 0
    {
        for (int j = 1; j <= n; j++)
        {
            if (n - i <= j)
            {
                printf("* ");
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