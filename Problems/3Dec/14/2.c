#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)calloc(2, sizeof(int));

    printf("Enter value of a: ");
    scanf("%d", ptr);
    printf("Enter value of b: ");
    scanf("%d", ptr + 1);
    printf("Sum is %d\n", *ptr + *(ptr + 1));

    free(ptr);
    ptr= NULL;
    return 0;
}