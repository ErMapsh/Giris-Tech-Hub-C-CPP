#include <stdio.h>

int main()
{
    int num, flag; // 0 as prime number
    // printf("Enter the number: ");
    // scanf("%d", &num);

    num = 29;
    for (int i = 0; i <= num; i++)
    {
        flag = 0; // for every number need to setup flag is zero cause is showing number can be prime
        if (i == 1 || i == 0)
        {
            flag = 1; // not a prime number
        }

        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 1; // not a prime number
                break;
            }
            flag = 0;
        }

        // printf("%d ", flag);
        if (flag == 0)
        {
            printf("%d is prime number\n", i);
        }
    }

    return 0;
}