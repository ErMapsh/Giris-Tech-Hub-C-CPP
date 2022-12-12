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

int *InsertingElement(int *ptr, int *size, int element, int index)
{
    int choice, temp;
    printf("1.Without shiffting\n2.With shifting\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        *(ptr + index) = element;
        break;
    case 2:
        ptr = (int *)realloc(ptr, 1);
        *(size) = *(size) + 1;

        for (int i = *size; i >= index + 1; i--)
        {
            *(ptr + i) = *((ptr) + (i - 1));
        }
        *(ptr + index) = element;
        break;

    default:
        printf("Invalid choice: ");
        break;
    }

    return ptr;
}

int main(int argc, char const *argv[])
{
    int size, *ptr, element, index;

    printf("Enter the value of array: ");
    scanf("%d", &size);

    ptr = CreateArray(size);

    printf("\nEnter value for array: \n");
    ptr = SetupArray(ptr, size);

    printf("\nValue is array: ");
    Display(ptr, size);

    /* getting input from user */
    printf("\nEnter the element that you want to insert: ");
    scanf("%d", &element);

    printf("Enter the index number: ");
    scanf("%d", &index);

    ptr = InsertingElement(ptr, &size, element, index);
    Display(ptr, size);
    return 0;
}
