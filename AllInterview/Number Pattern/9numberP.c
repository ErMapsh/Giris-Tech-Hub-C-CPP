#include <stdio.h>

/*
    _ _ _ _ 1
    _ _ _ 1 2 1
    _ _ 1 2 3 2 1
    _ 1 2 3 4 3 2 1
    1 2 3 4 5 4 3 2 1

*/
int main()
{

    for (int i = 0; i < 5; i++)
    {
        for (int j = 1, k = 1; j <= 5 + i; j++)
        {
            if (j >= 5 - i && j <= 4)
            {
                printf("%d ", k++);
            }
            else if (5 <= j)
            {
                printf("%d ", k--);
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