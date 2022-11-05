#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, rem;
    printf("Enter a num: ");
    scanf("%d", &num);

    rem = num % 2;

    switch (rem)
    {
    case 0:
        printf("Even number..\n");
        break;
    case 1:
        printf("Odd number..\n");
        break;

    default:
        printf("Someting wrong, try again...\n");
        break;
    }
    return 0;
}