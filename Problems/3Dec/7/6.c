#include <stdio.h>
#include <stdlib.h>

int main()
{

    int size, i, index;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int a[size];
    for (i = 0; i < size; i++)
    {
        printf("Enter the value for a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nYour Array is = \n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nEnter the position do you want to delete: ");
    scanf("%d", &index);

    if (index > size)
    {
        printf("\nIndex cant be greater than your size-1 number, try again.\n");
        exit(1);
    }

    for (i = index; i < size; i++)
    {
        a[i] = a[i + 1];
    }

    size--;

    printf("\nAfter deleting element: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}