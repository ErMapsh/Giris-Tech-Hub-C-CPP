#include <stdio.h>
int main(int argc, char const *argv[])
{
    /*
        A Simple Solution is to go through every number from 1  to n-1 and check if it is a divisor. Maintain sum of all divisors. If sum becomes equal to n, then return true, else return false.

        Input: n = 15
        Output: false
        Divisors of 15 are 1, 3 and 5. Sum of
        divisors is 9 which is not equal to 15.

    */

    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int i = 1, sum = 0;
    while (i < n)
    {
        if (n % i == 0)
        {
            sum += i;
        }
        i++;
    }

    if (sum == n)
    {
        printf("Yes, %d is perfect number", n);
    }
    else
    {
        printf("No, %d is not perfect number", n);
    }

    return 0;
}