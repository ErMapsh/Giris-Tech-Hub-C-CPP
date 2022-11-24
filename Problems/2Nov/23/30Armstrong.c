#include <stdio.h>
#include <math.h>

int main()
{   
    // 30. Write a C program to check whether a number is Armstrong number or not.
    int num;
    printf("Enter a num: ");
    scanf("%d", &num);

    int len = 0, temp = num;
    while (temp != 0)
    {
        len++;
        temp /= 10;
    }
    temp = num;

    int sum = 0, rem;
    while (temp != 0)
    {
        rem = temp % 10;
        sum += pow(rem, len);
        temp /= 10;
    }

    sum == num ? printf("Armstrong") : printf("Not armstrong");

    return 0;
}