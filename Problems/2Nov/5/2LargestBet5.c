#include <stdio.h>

int main()
{
    int a, b, c,d, e, max;
    printf("Enter the a: ");
    scanf("%d", &a);
    printf("Enter the b: ");
    scanf("%d", &b);
    printf("Enter the c: ");
    scanf("%d", &c);
    printf("Enter the c: ");
    scanf("%d", &d);
    printf("Enter the c: ");
    scanf("%d", &e);

    max = a>b? a:b;
    max = max>c? max:c;
    max = max>d? max:d;
    max = max>d? max:d;
    max = max>e? max:e;

    printf("%d", max);

    return 0;
}