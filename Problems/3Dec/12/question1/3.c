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

void OccuranceDelete(int *ptr, int *size)
{
    int current;
    for (int i = 0; i < *size; i++)
    {
        for (int j = i + 1; j < *size; j++)
        {
            if (*(ptr + i) == *(ptr + j))
            {
                for (int k = j; k < *size; k++)
                {
                    *(ptr + k) = *(ptr + (k + 1));
                }
                *size = *size - 1;
            }
        }
    }

    printf("\nNew array is: ");
    Display(ptr, *size);
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
    OccuranceDelete(ptr, &size);
    printf("\nSize of array now %d\n", size);


    free(ptr);
    ptr=NULL;
    return 0;
}
