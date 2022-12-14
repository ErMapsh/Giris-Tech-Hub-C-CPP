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

int *CopyArray(int *ptr, int *ptr1, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(ptr1 + i) = *(ptr + i);
    }
    return ptr1;
}

int main()
{
    int *ptr, *ptr1, size;
    printf("Enter value for your array: ");
    scanf("%d", &size);

    ptr = CreateArray(size);

    ptr = SetArray(ptr, size);
    display(ptr, size);

    ptr1 = CreateArray(size);
    ptr1 = CopyArray(ptr, ptr1, size);

    free(ptr);
    ptr = NULL;

    printf("\n\nAfter copying array to another memory, second array is: ");
    display(ptr1, size);
    free(ptr1);
    ptr1 = NULL;

    return 0;
}