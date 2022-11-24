// 12. Write a C program to find sum of first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main()
{
    signed long num, temp; // signed long range have -2,147,483,648 to +2,147,483,647
    printf("Enter a number (number length less than 11): ");
    scanf("%ld", &num);
    temp = num;

    int len = 0;
    while (temp != 0)
    {
        temp /= 10;
        len++;
    }
    printf("Length of digit is %d\n", len);

    /* here is the thing long only store 10 digit number with belongs to his range. we can use here log10 but i gonna use my logic*/
    int logic = pow(10, len - 1), temp2 = num, first, second;
    first = temp2 / logic;
    second = temp2 % 10;

    printf("The sum of %d + %d is %d\n", first, second, first + second);
    return 0;
}