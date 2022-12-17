#include <stdio.h>

int Sum(int n)
{   
    // for better performance is better
    int i = 2, sum = 0;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        i += 2;
    }
    return sum;
}

int main()
{
    // 7. Write a C program to find sum of all even numbers between 1 to n.
    int i = 1, num, sum = 0;
    printf("Enter number: ");
    scanf("%d", &num);

    while (i <= num)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        i++;
    }

    printf("Sum is %d\nby function calling %d\n", sum, Sum(num));
    return 0;
}