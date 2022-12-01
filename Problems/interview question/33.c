#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Perfect number are from 1 to %d: ", num);
    for (int i = 1; i <= num; i++)
    {
        // for factor
        int sum = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }

        if (i == sum)
        {
            printf("%d ", i);
        }
    }

    return 0;
}