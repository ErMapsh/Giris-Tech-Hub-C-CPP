#include <stdio.h>
#include <malloc.h>
#include <math.h>

int logBaseTwo(double num, int base)
{
    return (log(num) / log(base)) + 1;
}

int power(int base, int exp)
{
    int result = 1;

    // power not gone 0 until u should , multiply itself
    while (exp != 0)
    {
        result *= base;
        --exp;
    }
    return result;
}

int main()
{

    /*
        num = 12;
        rev = 0;

        step1:
        rem = num % 2                 //12%2 = 1;
        num = num / 2;                // 6


        step2:
        rem = 6 % 2 = 0
        num = 6/2 = 3

        step3:
        rem = 3 % 2 = 1
        num = 3 / 2 = 1;

        step 4:
        rem = 1 % 2 = 1
        num = 1 / 2 = 0

    */

    double num;
    int rem, rev, base = 2;
    int *arr;
    printf("Enter the number: ");
    scanf("%lf", &num);
    int temp = num;

    int length = logBaseTwo(num, base);
    // printf("%d\n", length);

    arr = (int *)malloc(length * sizeof(int));

    if (arr == NULL)
    {
        printf("Something wrong..\n");
        exit(0);
    }
    else
    {
        printf("Memory successfully allocated using malloc.\n");

        for (int i = 0; i < length; i++)
        {
            rem = (int)num % 2;
            arr[i] = rem;
            num = (int)num / 2;
        }

        printf("%d into binary is: ", temp);
        for (int j = length - 1; 0 <= j; j--)
        {
            printf("%d", arr[j]);
        }
    }
    return 0;
}