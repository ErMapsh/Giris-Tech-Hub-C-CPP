#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, rem, rev = 0, temp;
    printf("Enter three digit number: ");
    scanf("%d", &num);
    temp = num;

    rem = temp % 10;
    rev = rev + rem * 100;
    temp = temp / 10;

    rem = temp % 10;
    rev = rev + rem * 10;
    temp = temp / 10;

    rem = temp % 10;
    rev = rev + rem * 1;
    temp = temp / 10;

    num == rev ? printf("%d is Palidrome..\n", rev) : printf("%d is not Palidrome..\n", rev);

    printf(temp == rev? "%d is Palidrome..\n": "%d is not Palidrome..\n", rev);
    return 0;
}