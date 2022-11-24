#include <stdio.h>

int main()
{
    int num, fact = 1, i = 2;
    printf("Enter the number: ");
    scanf("%d", &num);

    do
    {
        fact *= i;
        i++;
    } while (i <= num);
    printf("Factorial of %d is %d", num, fact);
    return 0;
}