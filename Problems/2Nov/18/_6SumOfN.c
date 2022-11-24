#include <stdio.h>

int main()
{
    int num, sum = 0, i = 1;
    printf("Enter the number: ");
    scanf("%d", &num);

    do
    {
        sum += i;
        i++;
    } while (i <= num);
    printf("Factorial of %d is %d", num, sum);
    return 0;
}