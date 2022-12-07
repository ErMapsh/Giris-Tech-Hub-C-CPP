#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, *ptr1, *ptr2, size, size1, i, j, temp;

    printf("Enter the number of element to be stroed in the first array: ");
    scanf("%d", &size);

    ptr = (int *)malloc(size * sizeof(int));

    for (i = 0; i < size; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", ptr + i);
    }

    // first array  1
    printf("Element in array 1: \n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", *(ptr + i));
    }

    printf("\nEnter the number of element to be stroed in the second array: ");
    scanf("%d", &size1);
    ptr1 = (int *)malloc(size1 * sizeof(int));

    for (i = 0; i < size1; i++)
    {
        printf("Enter b[%d]: ", i);
        scanf("%d", ptr1 + i);
    }

    printf("Element in array 1: \n");
    for (i = 0; i < size1; i++)
    {
        printf("%d ", *(ptr1 + i));
    }

    // marging array
    int totalsize = size1 + size;
    ptr2 = (int *)malloc(totalsize * sizeof(int));

    for (i = 0; i < size; i++)
    {
        *(ptr2 + i) = *(ptr + i);
    }

    for (i = 0; i < size1; i++)
    {
        *(ptr2 + (size + i)) = *(ptr1 + i);
    }

    printf("\nMerge array: ");
    for (i = 0; i < totalsize; i++)
    {
        printf("%d ", *(ptr2 + i));
    }

    printf("\nDecending order: ");
    for (i = 0; i < totalsize; i++)
    {
        for (j = 0; j < totalsize - 1 - i; j++) // because of last indeex is gonna index+1 that i dont want
        {
            if (*(ptr2 + j) < (*(ptr2 + (j + 1))))
            {
                temp = *(ptr2 + j);
                *(ptr2 + j) = (*(ptr2 + (j + 1)));
                (*(ptr2 + (j + 1))) = temp;
            }
        }
    }

    for (i = 0; i < totalsize; i++)
    {
        printf("%d ", *(ptr2 + i));
    }

    return 0;
}