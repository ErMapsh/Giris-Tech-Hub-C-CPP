// 29. Write a C program to find all prime factors of a number.

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Prime factor of %d : ", num);
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            int flag = 1;
            if (i == 1)
            {
                continue;
            }

            // here we checking number from 2 and n-i or 2 to n/2
            for (int j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    flag = 0;
                    break;
                }
            }

            if (flag == 1)
                printf("%d ", i);
        }
    }

    return 0;
}