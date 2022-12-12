#include <stdio.h>
#include <stdlib.h>
// 2. Write a c program to check whether a given number is present in given array (take array as input and number to be checked as input)

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

int BinarySearch(int *ptr, int size, int value)
{
    int low = 0, mid, high = size - 1;

    if (*(ptr) == value)
    {
        return (1);
    }
    else if (*(ptr + high) == value)
    {
        return (1);
    }
    else
    {
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (*(ptr + mid) == value)
            {
                return (1);
            }
            else if (*(ptr + mid) < value)
            {
                low = mid + 1;
            }
            else if (*(ptr + mid) > value)
            {
                high = mid - 1;
            }
        }
    }
    return 0;
}

int main()
{
    int size, *ptr, value, result;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    ptr = CreateArray(size);
    ptr = SetupArray(ptr, size);

    printf("\nArray is: ");
    Display(ptr, size);

    printf("\nEnter value that your want to search: ");
    scanf("%d", &value);
    result = BinarySearch(ptr, size, value);
    result == 1 ? printf("Value is present in array") : printf("Value is not present in array");

    free(ptr);
    ptr = NULL;
    return 0;
}