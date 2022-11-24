// 14. Write a C program to calculate sum of digits of a number.

#include <stdio.h>

int main()
{
    unsigned long num, temp;
    int rem, sum = 0;
    printf("Enter a number: ");
    scanf("%ld", &num);
    temp = num;

    while (temp != 0)
    {
        rem = temp % 10;
        sum += rem;
        temp /= 10;
    }

    printf("The sum is %d", sum);
    return 0;
}