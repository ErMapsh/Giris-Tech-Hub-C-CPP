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
        printf("%d ", *(ptr + i));
    }
}

int *reverseArray(int *ptr, int size)
{
    int temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = *(ptr + i);
        *(ptr + i) = *(ptr + (size - 1 - i));
        *(ptr + (size - 1 - i)) = temp;
    }
    return ptr;
}

int main()
{
    int *ptr, size;
    printf("Enter the size of your array: ");
    scanf("%d", &size);

    ptr = CreateArray(size);
    ptr = SetArray(ptr, size);
    display(ptr, size);

    printf("\nAfter reversing array: ");
    ptr = reverseArray(ptr, size);
    display(ptr, size);
    return 0;
}