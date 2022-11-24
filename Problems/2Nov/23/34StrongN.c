/*
34. Write a C program to check whether a number is Strong number or not.

Strong number is a special number whose sum of factorial of digits is equal to the original number.
For example: 145 is strong number. Since, 1! + 4! + 5! = 145
*/

#include <stdio.h>

int main()
{

    int num, temp, rem, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    temp = num;

    while (temp != 0)
    {
        rem = temp % 10; // last digit of number 

        int fact = 1; // for 1 to n
        for (int i = 1; i <= rem; i++)
        {
            fact *= i;
        }

        // adding fact to sum
        sum += fact;

        temp /= 10;
    }

    if (num == sum)
    {
        printf("%d is strong number\n", num);
    }
    else
    {
        printf("%d is not strong number\n", num);
    }
    return 0;
}