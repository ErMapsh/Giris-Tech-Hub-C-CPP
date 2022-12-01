#include <stdio.h>

int main()
{
    /*
      -----*
      ----*-*
      ---*---*
      --*-----*
      -*-------*
      * * * * * *
    */

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == n - i || i == n - 1 || j == n)
            {
                printf("* ");
            }
            else if (j > n - i && j < n)
            {
                // its affect to the single underscore so i did this
                printf("  ");
            }
            else
            {
                printf(" "); // for outside of pyramid
            }
        }
        printf("\n");
    }

    return 0;
}