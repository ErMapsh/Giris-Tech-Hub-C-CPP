#include <stdio.h>
#include<math.h>

int DigitLen(int value)
{
    int i = 0;
    while (value != 0)
    {
        value = value / 10;
        i++;
    }
    return i;
}

int main()
{
    int num, temp, rem, rev = 0, len;
    printf("Enter the number: ");
    scanf("%d", &num);
    temp = num;

    //  normal method
    /*
    rev = (num%10 * 100) + ((num/10)%10 *10) + (((num/10)/10)%10 *1);
    printf("%d", rev);
    */

    len = DigitLen(temp);
    int mulLogic = pow(10, len-1);
    printf("Length of number is %d\n", len);

    for (int i = 0; i < len; i++)
    {
        rem = num % 10;
        rev += rem * mulLogic;
        num = num / 10;
        mulLogic /= 10;
    }
    printf("Reverse %d\n", rev);

    if (rev == temp)
    {
        printf("Enter number is Palindrome..%d\n", rev);
    }
    else
    {
        printf("Enter number is Not Palindrome..%d\n", rev);
    }

    return 0;
}