// 27. Write a C program to print all Prime numbers between 1 to n.

#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        int flag = 1;
        if (i == 1)
            continue;

        for (int j = 2; j <= i - 1; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
            sum += i;
    }

    printf("Sum of all prime number between 1 to %d is %d\n", num, sum);
    return 0;
}