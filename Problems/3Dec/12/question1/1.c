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
        printf("Enter the value for index %d : ", i);
        scanf("%d", (ptr + i));
    }
    return ptr;
}

void display(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(ptr + i));
    }
}

int *RevereseArray(int *ptr, int size)
{
    int temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = *(ptr + i);
        *(ptr + i) = *(ptr + (size - 1 - i));
        *(ptr + (size - i - 1)) = temp;
    }
    return ptr;
}

int main(int argc, char const *argv[])
{
    int *ptr, size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    ptr = CreateArray(size);
    ptr = SetArray(ptr, size);
    printf("\nBefore reversed array: ");
    display(ptr, size);

    printf("\nAfter reversed array: ");
    ptr = RevereseArray(ptr, size);
    display(ptr, size);

    free(ptr);
    ptr = NULL;
    return 0;
}
