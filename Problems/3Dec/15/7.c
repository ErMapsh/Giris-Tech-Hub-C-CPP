#include <stdio.h>

// Write a C program to print all strong numbers between given interval using functions.
int Strong(int);
void Allstrong(int, int);
int factorialOfN(int);

int main()
{
    int a, b;
    printf("Enter the first number where are u want to start: ");
    scanf("%d", &a);
    printf("Enter the second number where are u want to stop: ");
    scanf("%d", &b);
    Allstrong(a, b);
    return 0;
}

void Allstrong(int x, int y)
{
    for (int i = x; i <= y; i++)
    {
        if (i == Strong(i))
        {
            printf("%d is strong number \n", i);
        }
    }
}

int Strong(int x)
{
    int sum = 0, rem, temp = x;
    while (x != 0)
    {
        rem = x % 10;
        sum += factorialOfN(rem);
        x /= 10;
    }
    return sum;
}

int factorialOfN(int x)
{
    int mul = 1, i;
    for (i = 2; i <= x; i++)
    {
        mul *= i;
    }
    return (mul);
}