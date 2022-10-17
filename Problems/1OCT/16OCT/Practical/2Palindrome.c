#include <stdio.h>

int main(void)
{
    int num, temp, rem, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;

    // first step
    rem = temp % 10;
    rev = rev + rem * 1;
    temp = temp / 10;

    // second step
    rem = temp % 10;
    rev = rev + rem * 10;
    temp = temp / 10;

    // third step
    rem = temp % 10;
    rev = rev + rem * 100;
    temp = temp / 10;

    printf(num == rev ? "%d is palindrome number\n" : "%d is not palindrome number\n", num);

    return 0;
}

// with for loop increment
/*
    int ByIncrement = 1;

    for(i int = 0; i < lengthOfDigit ; i++){
        rem = num % 10;
        rev = rev + rem * ByIncrement;
        num = num / 10;
        BuIncrement *= 10;
    }

*/