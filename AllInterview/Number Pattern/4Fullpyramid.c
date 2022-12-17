#include <stdio.h>

int main()
{
    /*
    _  _  _  _  1  _  _  _  _
    _  _  _  2  3  2  _  _  _
    _  _  3  4  5  4  3  _  _
    _  4  5  6  7  6  5  4  _
    5  6  7  8  9  8  7  6  5
    */

    for (int i = 0; i < 5; i++)
    {
        for (int j = 1, k = i + 1; j <= 9; j++)
        {
            if (j >= 5 - i && j <= 5 + i)
            {
                if (j < 5)
                {
                    printf("%d ", k++);
                }
                else if (j == 5)
                {
                    printf("%d ", k);
                }
                else
                {
                    printf("%d ", --k);
                }
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