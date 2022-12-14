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

int *MergedArray(int *ptr, int *ptr1, int size, int size1)
{

    ptr = (int *)realloc(ptr, size1);
    for (int i = 0; i < size1; i++)
    {
        *(ptr + size) = *(ptr1 + i);
        size++;
    }
    return ptr;
}

int main()
{
    int *ptr, *ptr1, *ptr2, size, size1;
    printf("Enter the size for first array: ");
    scanf("%d", &size);

    ptr = CreateArray(size);
    ptr = SetArray(ptr, size);
    display(ptr, size);

    printf("\nEnter the size for second array: ");
    scanf("%d", &size1);
    ptr1 = CreateArray(size1);
    ptr1 = SetArray(ptr1, size1);
    display(ptr1, size1);

    ptr2 = MergedArray(ptr, ptr1, size, size1);
    display(ptr2, (size+size1));

    free(ptr);
    free(ptr1);
    free(ptr2);
    ptr = NULL;
    ptr1 = NULL;
    ptr2 = NULL;
    
    return 0;
}