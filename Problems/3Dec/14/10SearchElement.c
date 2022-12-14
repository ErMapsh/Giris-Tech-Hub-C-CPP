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

int SearchElement(int *ptr, int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (*(ptr + i) == element)
        {
            return 1;
        }
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int *ptr, size, element;
    printf("Enter a size of element: ");
    scanf("%d", &size);

    ptr = CreateArray(size);
    ptr = SetArray(ptr, size);
    display(ptr, size);

    printf("\n\nEnter value that you want to search: ");
    scanf("%d", &element);
    int result = SearchElement(ptr, size, element);
    result == 1 ? printf("Element are present\n") : printf("Element are not present\n");

    return 0;
}
