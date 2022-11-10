#include <stdio.h>
#include <math.h>

int main()
{
    int n, temp, temp2, len = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    temp = temp2 = n;

    while (temp != 0)
    {
        temp = temp / 10;
        len++;
    }
    printf("The length of digit is %d\n", len);

    int k = 0, sum = 0, rem;
    while (k < len)
    {
        rem = temp % 10;
        temp = temp / 10;
        sum = sum + pow(rem, len);
        k++;
    }

    if (n == sum)
    {
        printf("%d is armstrong...\n", n);
    }
    else
    {
        printf("%d is not armstrong..\n", n);
    }
    return 0;
}