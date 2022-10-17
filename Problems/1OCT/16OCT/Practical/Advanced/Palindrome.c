#include <stdio.h>
#include<math.h>

int logBaseTen(double num, int base)
{
    return (log(num) / log(base)) + 1;
}

int main()
{
    double num;
    int temp, rem, rev = 0;
    printf("Enter a number: ");
    scanf("%lf", &num);
    temp = (int)num;

    int lengthOfDigit = logBaseTen(num, 10);
    // printf("%d\n", lengthOfDigit);

    for (int i = 0; i < lengthOfDigit; i++)
    {
        int ByIncrement = 1;
        for (int i = 0; i < lengthOfDigit; i++)
        {
            rem = (int)num % 10;
            rev = rev + rem * ByIncrement;
            num = num / 10;
            ByIncrement *= 10;
            // printf("Rev is %d\n", rev);
        }
    }

    printf(temp == rev ? "%d is palindrome number\n": "%d is not palindrome number\n", rev);
}