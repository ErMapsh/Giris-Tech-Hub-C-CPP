#include <stdio.h>
#include <math.h>
// Write a C program to print all Armstrong numbers between given interval using functions.

int findLen(int);
void AllArmStrong(int x, int y);
int ArmStrong(int);

int main()
{
    int a, b;
    printf("Enter the first number where are u want to start: ");
    scanf("%d", &a);
    printf("Enter the second number where are u want to stop: ");
    scanf("%d", &b);
    AllArmStrong(a, b);
    return 0;
}

void AllArmStrong(int x, int y)
{
    for (int i = x; i <= y; i++)
    {   
        if ( ArmStrong(i) == i)
        {
            printf("%d is armstrong..\n", i);
        }
    }
}

int ArmStrong(int x)
{
    int temp = x, rem, sum = 0, len;
    len = findLen(x);
    while (x != 0)
    {
        rem = x % 10;
        sum += pow(rem, len);
        x /= 10;
    }
    return sum;
}

int findLen(int x)
{
    int len = 0;
    while (x != 0)
    {
        len++;
        x /= 10;
    }

    return len;
}