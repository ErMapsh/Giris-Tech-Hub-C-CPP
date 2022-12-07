#include <stdio.h>

int main()
{
    int size, i;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size], even[size], odd[size], Euse = 0, Ouse = 0;

    printf("\nElement for array: \n");
    for (i = 0; i < size; i++)
    {
        printf("Value for arr[%d]:", i);
        scanf("%d", &arr[i]);
    }

    // let a div
    for (i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[Euse] = arr[i];
            Euse++;
        }
        else
        {
            odd[Ouse] = arr[i];
            Ouse++;
        }
    }

    printf("\nEven numbers: ");
    for (i = 0; i < Euse; i++)
    {
        printf("%d ", even[i]);
    }

    printf("\nEven numbers: ");
    for (i = 0; i < Ouse; i++)
    {
        printf("%d ", odd[i]);
    }

    return 0;
}