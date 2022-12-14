#include <stdio.h>

int Greatest(int *a, int *b)
{
    if (*a > *b)
    {
        return *a;
    }
    return *b;
}
int main()
{
    int a, b, c;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter b number: ");
    scanf("%d", &b);

    printf("Greatest number between %d and %d is----> %d", a, b, Greatest(&a, &b));
    return 0;
}