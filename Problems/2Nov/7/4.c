#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("-------Fibonacci serise----->\n");
    int a = 0, b = 1, c, num; // need to declare and init a and b
    printf("Enter your number: ");
    scanf("%d", &num);

    if (num <= 30)
    {
        printf("%d %d ", a, b);
        for (int i = 1; i < num; i++) // from fibo of 2
        {
            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
    }
    else
    {
        printf("----> Warning: Enter number should not greater than 30.\n");
    }

    return 0;
}