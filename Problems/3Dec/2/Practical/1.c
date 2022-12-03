#include <stdio.h>

int main()
{

    int choice, arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    printf("1.Show all element of array\n2.Search element by value\n3.Enter index and print value of that index\n4.Delete element at the end of array\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        for (int i = 0; i < 10; i++)
        {
            printf("%d ", arr[i]);
        }
        break;

    case 2:
        int value;
        printf("Enter the value: ");
        scanf("%d", &value);
        for (int i = 0; i < 10; i++)
        {
            if (arr[i] == value)
            {
                printf("%d element present at %d index\n", arr[i], i);
            }
        }
        break;

    case 3:
        int index;
        printf("Enter the index: ");
        scanf("%d", &index);
        if (index < 10)
        {
            printf("Value at %d index is %d\n", index, arr[index]);
        }
        else
        {
            printf("Sorry, but array have index 0 to 9\n");
        }
        break;

    case 4:
        for (int i = 0; i < 9; i++)
        {
            printf("%d ", arr[i]);
        }
        break;
        
    default:
        printf("Invalid choice..\n");
        break;
    }
    return 0;
}