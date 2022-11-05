#include <stdio.h>

int main()
{
    int a, b, c, max;
    printf("Enter the a: ");
    scanf("%d", &a);
    printf("Enter the b: ");
    scanf("%d", &b);
    printf("Enter the c: ");
    scanf("%d", &c);

    if (a < b)
    {
        max = b;
    }
    else
    {
        max = a;
    }

    if (max < c)
    {
        max = c;
    }

    printf("%d", max);

    return 0;
}