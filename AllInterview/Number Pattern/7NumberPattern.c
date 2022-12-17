#include <stdio.h>

/*

    1
    1 2 1
    1 2 3 2 1
    1 2 3 4 3 2 1
    1 2 3 4 5 4 3 2 1

*/

int main()
{

    for (int i = 0; i < 5; i++)
    {
        for (int j = 1, k = 1; j <= 9; j++)
        {
            if (j >= 1 && j <= 1 + (i * 2))
            {
                if (j < (i + 1))
                {
                    printf("%d ", k++);
                }
                else if (j == (i + 1))
                {
                    printf("%d ", k);
                }
                else
                {
                    printf("%d ", --k);
                }
            }
        }
        printf("\n");
    }

    return 0;
}