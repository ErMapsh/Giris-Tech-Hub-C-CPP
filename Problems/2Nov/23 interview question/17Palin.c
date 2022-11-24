#include <stdio.h>
#include <math.h>

int main()
{
    // 17. Write a C program to check whether a number is palindrome or not.
    int num, temp, rem, logic10, len = 0, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;

    while (temp != 0)
    {
        len++;
        temp /= 10;
    }
    temp = num;
    printf("Length of number is %d\n", len);

    logic10 = pow(10, len - 1);

    while (temp != 0)
    {
        rem = temp % 10;
        rev += (rem * logic10);

        temp /= 10;
        logic10 /= 10;
    }

    // printf("%d\n", rev);

    rev == num ? printf("%d is Palindrom", num) : printf("%d is Not palindrome", num);
    return 0;
}