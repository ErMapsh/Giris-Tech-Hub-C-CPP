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
    int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int temp;
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("Enter %d index value: ", i);
    //     scanf("%d", &arr[i]);
    // }
    /*
        order of(n*n)
    */

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
    return 0;
}