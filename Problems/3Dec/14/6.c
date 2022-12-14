#include <stdio.h>
#include <stdlib.h>

int *CreateArray(int size)
{
    int *ptr;
    ptr = (int *)calloc(size, sizeof(int));
    return ptr;
}

int *SetArray(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter value for %d : ", i);
        scanf("%d", ptr + i);
    }
    return ptr;
}

void display(int *ptr, int size)
{
    printf("\nArray is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *ptr + i);
    }
}
int main()
{
    int *ptr, size;
    printf("Enter size for your array: ");
    scanf("%d", &size);

    ptr = CreateArray(size);
    ptr = SetArray(ptr, size);

    display(ptr, size);
    free(ptr);
    ptr = NULL;
    return 0;
}