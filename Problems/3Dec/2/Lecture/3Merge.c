#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5},
        b[5] = {1, 2, 3, 4, 5}, c[10];

    for (int i = 0; i < 5; i++)
    {
        c[i] = a[i];
        c[5+i] = b[i];
    }
    
    printf("The merge array is: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", c[i]);
    }
    
    return 0;
}