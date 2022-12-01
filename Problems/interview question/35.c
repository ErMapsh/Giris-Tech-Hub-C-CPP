/*
35. Write a C program to print all Strong numbers between 1 to n.

Strong number is a special number whose sum of factorial of digits is equal to the original number.
For example: 145 is strong number. Since, 1! + 4! + 5! = 145
*/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    for (int n = 1; n <= num; n++)
    {

        int sum = 0, fact, rem, temp = n;
        while (temp != 0)
        {
            // considering n = 145
            fact = 1;
            rem = temp % 10; // 5 --> 4 ---> 1

            for (int i = 2; i <= rem; i++)
            {
                fact *= i; // 5! = 5*4*3*2 = 120 ---> 4! = 4*3*2 = 24---> 1! = 1
            }

            // adding fact to sum
            sum += fact; // 120 + 24 + 1

            temp /= 10; // 14 --> 1 --> 0
        }

        if (n == sum)
        {
            printf("%d is strong number\n", sum);
        }
    }
    return 0;
}