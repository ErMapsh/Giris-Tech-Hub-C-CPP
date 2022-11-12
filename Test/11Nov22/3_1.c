#include <stdio.h>

int main()
{
    int num, rem, occur, count = 0;
    printf("Enter number : ");
    scanf("%ld", &num);
    printf("Enter the number for occurance: ");
    scanf("%d", &occur);
    while (num != 0)
    {
        rem = num % 10;
        if (rem == occur)
        {
            count++;
        }
        // printf("%d %d\n", rem, occur);
        num /= 10;
    }

    printf("%d", count);
    return 0;
}