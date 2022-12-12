#include <stdio.h>
#include <stdlib.h>

void Display(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(ptr + i));
    }
}

int *CreateArray(int size)
{
    int *ptr;
    ptr = (int *)calloc(size, sizeof(int));
    return ptr;
}

int *SetupArray(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter value for index %d : ", i);
        scanf("%d", ptr + i);
    }
    return ptr;
}

int *DeleteElement(int *ptr, int *size, int element)
{
    int temp;
    for (int i = 0; i < *size; i++)
    {
        if (*(ptr + i) == element)
        {
            for (int j = i; j < *size - 1; j++)
            {
                temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
                break;
            }
        }
    }
    *size = *size - 1;
    return ptr;
}

int main()
{

    int size, *ptr, element;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    ptr = CreateArray(size);
    ptr = SetupArray(ptr, size);

    printf("\nArray is ");
    Display(ptr, size);

    printf("Enter tha value that you want to delete : ");
    scanf("%d", &element);

    printf("\nAfter deleting---->");
    ptr = DeleteElement(ptr, &size, element);
    Display(ptr, size);
}