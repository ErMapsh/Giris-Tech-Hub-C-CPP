// 13. Write a C program to swap first and last digits of a number.

#include <stdio.h>
#include <math.h>
int main()
{
    signed long num, temp, temp2;
    int rem, firstDigit;
    printf("Enter a number (Number should be less than 10): ");
    scanf("%ld", &num); // value should be in range -2,147,483,648 to 2,147,483,647
    temp = temp2 = num;

    rem = temp % 10;
    // firstDigit = (int)log10(num);
    /*
        2343434
        its divid by 10 until quo is 1, but here i gonna use my logic
    */

    int len = 0;
    while (temp != 0)
    {
        temp /= 10;
        len++;
    }

    long myLogic = pow(10, len - 1);
    firstDigit = temp2 / myLogic;
    // printf("%d %d %d %d\n", len, firstDigit, rem, myLogic);

    //-----lets remove minus last value and do addition of first digit
    long l1 = (temp2 - rem) + firstDigit;
    // printf("%ld\n", l1);

    //-----lets add to last to first
    long l2 = l1 % myLogic;
    // printf("%ld\n", l2);
    long l3 = (rem * myLogic) + l2;
    // printf("%ld\n", l3);

    printf("The final output is %d\n", l3);
    return 0;
}