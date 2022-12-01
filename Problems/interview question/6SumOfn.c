#include <stdio.h>
int main()
{
    // 6. Write a C program to find sum of all natural numbers between 1 to n.
    int num, i = 1, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (i <= num)
    {
        sum += i;
        i++;
    }

    printf("Sum between %d and %d is %d", 1, num, sum);

    return 0;
}