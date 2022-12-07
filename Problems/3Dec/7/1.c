#include <stdio.h>

int main()
{

    int size = 5, a[5] = {1, 5, 9, 13, 17}, i, j;

    printf("Missing elements are: \n");
    for (i = 0; i < size - 1; i++)
    {
        for (j = a[i] + 1; j < a[i + 1]; j++)
        {
            printf("%d ", j);
        }
    }
    return 0;
}
