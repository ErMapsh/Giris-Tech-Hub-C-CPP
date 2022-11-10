/*
    the duck number not have 0 at the begining
*/

#include <stdio.h>
#include <math.h>
int main()
{
    int n, len = 0, temp;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Your number is %d\n", n);
    temp = n;

    while (temp != 0)
    {
        temp /= 10;
        len++;
    }

    printf("Enter number length is %d\n", len);
    int firstDigit = n / pow(10, len - 1);

    if (firstDigit == 0)
    {
        printf("%d is duck number..\n", n);
    }
    else
    {
        printf("%d is not duck number..\n", n);
    }
    return 0;
}