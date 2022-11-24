#include <stdio.h>

int main()
{
    // 9. Write a C program to print multiplication table of any number.
    int num, i = 1;
    printf("Enter a num: ");
    scanf("%d", &num);
    while (i <= 10)
    {
        printf("%d ", num * i);
        i++;
    }

    return 0;
}