#include <stdio.h>

int main()
{
    int num, a = 0, b = 1, c;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d %d ", a, b);
    for (int i = 1; i < num; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    return 0;
}