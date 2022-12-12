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

void UniqueElement(int *ptr, int size)
{
    int *ptr1, i, j, usedSize = 0, flag;

    ptr1 = (int *)calloc(size, sizeof(int));

    for (i = 0; i < size; i++)
    {
        //  check element is in temp array;
        for (j = 0; j < usedSize; j++)
        {
            if (*(ptr1 + j) == *(ptr + i))
            {
                flag = 1;
                break;
            }
            else
            {
                flag = 0;
            }
        }

        if (flag == 1)
        {
            continue;
        }
        else
        {
            *(ptr1 + usedSize) = *(ptr + i);
            usedSize++;
            printf("%d ", *(ptr + i));
        }
    }
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

    printf("\n");
    UniqueElement(ptr, size);

    free(ptr);
    ptr = NULL;
    return 0;
}
