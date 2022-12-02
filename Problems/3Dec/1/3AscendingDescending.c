#include <stdio.h>
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    // int arr[10];
    int arr[10] = {4, 3, 2, 1, 0, 9, 8, 7, 6, 5};
    int temp;
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("Enter %d index value: ", i);
    //     scanf("%d", &arr[i]);
    // }
    /*
        order of(n*n)
    */

    int choice;
    printf("1.Ascending\n2.Descending\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        for (int i = 0; i < 10 - 1; i++) // for pass
        {
            for (int j = 0; j < 10 - 1 - i; j++) // for comparision in each pass
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        display(arr, 10);
        break;
    case 2:
        for (int i = 0; i < 10 - 1; i++) // for pass
        {
            for (int j = 0; j < 10 - 1 - i; j++) // for comparision in each pass
            {
                if (arr[j] < arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        display(arr, 10);
        break;

    default:
        printf("Invalid choice..\n");
        break;
    }

    return 0;
}