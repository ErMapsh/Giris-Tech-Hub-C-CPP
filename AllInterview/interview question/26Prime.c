#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, flag = 1; // as prime
    printf("Enter number: ");
    scanf("%d", &num);

    if (num == 1 || num == 0)
    {
        printf("1 and 0 are not prime and composite numbers");
        exit(1);
    }

    for (int i = 2; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            flag = 0; // 0 means is not prime number
            break;
        }
    }

    flag == 1 ? printf("%d is prime number", num) : printf("%d is not prime number", num);
}