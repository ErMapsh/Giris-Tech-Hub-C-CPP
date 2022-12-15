#include <stdio.h>

void GiveMeMaxMin(int, int);

int main()
{
    int a, b;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);
    GiveMeMaxMin(a, b);
    return 0;
}

void GiveMeMaxMin(int a, int b)
{
    if (a > b)
    {
        printf("a = %d is max and b = %d is min\n", a, b);
    }
    else
    {
        printf("b = %d is max and a = %d is min\n", b, a);
    }
}