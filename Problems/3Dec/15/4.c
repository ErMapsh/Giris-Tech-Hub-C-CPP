#include <stdio.h>

void EvenOdd(int);

int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    EvenOdd(number);
    return 0;
}

void EvenOdd(int x)
{
    if (x >= 1)
    {

        if (x % 2 == 0)
        {
            printf("%d is Even\n", x);
        }
        else
        {
            printf("%d is odd..\n", x);
        }
    }
    else
    {
        printf("Number not valid\n");
    }
}