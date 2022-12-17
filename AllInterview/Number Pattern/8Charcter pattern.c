#include <stdio.h>

/*

    A
    A B A
    A B C B A
    A B C D C B A
    A B C D E D C B A

*/

int main()
{

    for (int i = 0; i < 5; i++)
    {
        char k = 65;
        for (int j = 1; j <= 9; j++)
        {
            if (j >= 1 && j <= 1 + (i * 2))
            {
                if (j < (i + 1))
                {
                    printf("%c ", k++);
                }
                else if (j == (i + 1))
                {
                    printf("%c ", k);
                }
                else
                {
                    printf("%c ", --k);
                }
            }
        }
        printf("\n");
    }

    return 0;
}