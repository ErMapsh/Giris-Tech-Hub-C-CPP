#include <stdio.h>

int main()
{
    /*
        1 - - - -
        1 2 - - -
        1 - 3 - -
        1 - - 4 -
        1 2 3 4 5
        
        logic is 
        if j == 1 printf krdena
        if j == i matlb diagonal hoga to print krdena
        if i == n hoga matlb last row sare print krdena
    */
    int n;
    printf("Enter a num: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == i || i == n)
            {
                printf("%d ", j);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}