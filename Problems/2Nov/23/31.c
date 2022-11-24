#include <stdio.h>
#include <math.h>

int main()
{
    // 31. Write a C program to print all Armstrong numbers between 1 to n.

    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printf("Armstrong number between 1 and %d are : ", n);

    for (int i = 1; i <= n; i++)
    {
        int len = 0, temp = i, sum = 0, rem;
        while (temp != 0)
        {
            len++;
            temp /= 10;
        }
        temp = i;

        while (temp != 0)
        {
            rem = temp % 10;
            sum += pow(rem, len);
            temp /= 10;
        }

        if (sum == i)
            printf("%d ", i);
    }

    return 0;
}