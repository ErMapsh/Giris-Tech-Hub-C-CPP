// 27. Write a C program to print all Prime numbers between 1 to n.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    printf("Prime numbers are: ");
    for (int i = 1; i <= num; i++)
    {
        int flag = 1;
        if (i == 1)
        {
            // printf("1 is not prime and composite numbers\n");
            continue;
        }

        for (int j = 2; j <= i - 1; j++)
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

    return 0;
}