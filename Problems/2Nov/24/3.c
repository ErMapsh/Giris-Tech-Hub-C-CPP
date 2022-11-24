#include <stdio.h>

int main()
{

    int n;
    // n = 5;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1 || j  == (n + 1) - i)
            {
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

/*

if n = 5;
* * * * *
*     *
*   *
* *
*

*/