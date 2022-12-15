#include <stdio.h>
#include <math.h>

int prime(int);
int armstrong(int);
int PerfectNumber(int);

int main()
{
    int number;
    printf("Enter your number: ");
    scanf("%d", &number);

    printf(prime(number) == 1 ? "Number is prime\n" : "Number is not prime\n");
    printf(armstrong(number) == 1 ? "Number is armstrong\n" : "Number is not armstrong\n");
    printf(PerfectNumber(number) == 1 ? "Number is perfect\n" : "Number is not perfect\n");

    return 0;
}

int prime(int x)
{

    int flag = 1;
    if (x == 0 || x == 1)
    {
        return 0;
    }

    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }

    return flag;
}
int armstrong(int x)
{
    int temp = x, len = 0, addition = 0, rem;
    while (x != 0)
    {
        x /= 10;
        len++;
    }
    x = temp;

    while (x != 0)
    {
        rem = x % 10;
        addition = addition + pow(rem, len);
        x /= 10;
    }

    return addition == temp;
}
int PerfectNumber(int x)
{

    int temp = x, sum = 0;

    for (int i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            sum += i;
        }
    }
    // printf("%d\n", sum);
    return sum == temp;
}