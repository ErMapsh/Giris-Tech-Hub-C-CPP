#include <stdio.h>

// Write a C program to find all prime numbers between given interval using functions.

void AllPrime(int);
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    AllPrime(number);
    return 0;
}

void AllPrime(int a)
{
    int i, j, flag;
    for (i = 0; i < a; i++)
    {
        flag = 1;
        if (i == 1 || i == 0)
        {
            continue;
        }
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            printf("%d is prime number\n", i);
        }
    }
}