#include <stdio.h>

void display(int a[10], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int
        a[10] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5},
        // a[10] = {1, 2, 3, 4, 5, 1, 1, 3, 3, 5},
        i, j, choice, value, index, flag = 0, usedSize = sizeof(a) / sizeof(int);
    /*
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (i = 0; i < 10; i++)
    {
        printf("Enter the value for a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    */

    printf("\n1.Display all elements of array\n2.Insert element at specific index\n3.Search array element\n4.Delete element at specific index\n5.Remove all duplicate element from array\nEnter your choice...\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\nElement in array are: ");
        display(a, 10);
        break;

    case 2:
        printf("Enter the index where are u want to insert a value: ");
        scanf("%d", &index);
        printf("Enter a value: ");
        scanf("%d", &value);
        if (index >= 0 && index <= 9)
        {
            a[index] = value;
        }
        display(a, 10);
        break;

    case 3:
        printf("Enter the value: ");
        scanf("%d", &value);
        for (int i = 0; i < 10; i++)
        {
            if (a[i] == value)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            printf("Yes, value is present in array...\n");
        }
        else
        {
            printf("No, value not present in an array...\n");
        }
        break;

    case 4:
        printf("Delete Element at specific Position, enter index: ");
        scanf("%d", &index);
        if (index >= 0 && index <= 9)
        {
            for (int i = index; i < 10; i++)
            {
                a[i] = a[i + 1];
            }
        }
        else
        {
            printf("Index not valid\n");
        }

        display(a, 9);
        break;

    case 5:
        printf("Before removing duplicate elements: ");
        display(a, usedSize);
        for (i = 0; i < usedSize; i++)
        {
            // for comparing elements
            for (j = i + 1; j < usedSize; j++)
            {
                if (a[i] == a[j])
                {
                    // for shifting element to left side
                    for (int k = j; k < usedSize; k++)
                    {
                        a[k] = a[k + 1];
                    }
                    usedSize--;
                    j--;
                }
            }
        }
        // printf("usedSize = %d\n", usedSize);
        printf("After removing dupicate elements: ");
        display(a, usedSize);
        break;
    default:
        printf("Invalid choice.....\n");
        break;
    }

    return 0;
}