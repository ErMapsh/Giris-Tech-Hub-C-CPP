#include <stdio.h>
int main()
{
    int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    
    // int arr[10];
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("Enter %d index value: ", i);
    //     scanf("%d", &arr[i]);
    // }

    printf("Prime numbers are in ");
    for (int i = 0; i < 10; i++)
    {
        int flag = 1;
        if (arr[i] == 1 || arr[i] == 0)
        {
            continue;
        }
        for (int j = 2; j < arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}