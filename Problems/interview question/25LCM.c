/* 25. Write a C program to find LCM(Least common multiple) of two numbers.

LCM is a smallest positive integer that exactly divides two or more numbers. For Example
*/

#include <stdio.h>

int main()
{
    int num1, num2, max_div, flag = 1;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);

    max_div = (num1 > num2) ? num1 : num2;

    while (flag) // (flag = 1)
    {
        if (max_div % num1 == 0 && max_div % num2 == 0)
        {
            printf("\nThe LCM of %d and %d is %d. ", num1, num2, max_div);
            break;
        }
        ++max_div; // pre-increment max_div
        printf("%d\t", max_div);
    }

    return 0;
}