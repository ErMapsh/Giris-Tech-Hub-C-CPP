#include <stdio.h>

int main()
{
    // 10. Write a C program to count number of digits in a number.
    long num, temp;
    int len = 0;
    printf("Enter a num: ");
    scanf("%ld", &num);
    temp = num;

    while (num != 0)
    {
        num /= 10;
        len++;
    }

    printf("Length of %ld is %d\n", temp, len);
    return 0;
}