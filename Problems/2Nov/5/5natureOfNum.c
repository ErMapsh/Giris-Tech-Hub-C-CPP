#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, ch;
    printf("Enter number: ");
    scanf("%d", &num);

    ch = num == 0 ? num : (num > 0) ? 1
                                    : 2;

    switch (ch)
    {
    case 0:
        printf("Enter number is 0...\n");
        break;

    case 1:
        printf("Enter %d number is Positive number\n", num);
        break;
    case 2:
        printf("Enter %d number is Negative number\n", num);
        break;
    default:
        printf("Something went wrong...\n");
        break;
    }
    return 0;
}