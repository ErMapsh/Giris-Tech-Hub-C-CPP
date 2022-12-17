#include <stdio.h>
/*
    3
    44
    555
    6666
    555
    44
    3

*/
int main(int argc, char const *argv[])
{
    for (int i = 1, k = 3; i <= 7; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            if ((i <= 3 && j <= i) || (i >= 4 && j <= 8 - i))
            {
                printf("%d", k);
            }
        }
        i<=3 == 1? k++:k--;
        // if (i <= 3)
        // {
        //     k++;
        // }
        // else
        // {
        //     k--;
        // }
        printf("\n");
    }

    return 0;
}
