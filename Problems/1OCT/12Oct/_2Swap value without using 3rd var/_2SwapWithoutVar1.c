#include <stdio.h>

// swap to values without using third var

/*
    another logic: a = 10, b =20
    a=a*b    = 10 * 20 = 200
    b=a/b    = 200 / 20 = 10
    a=a/b    = 200 / 10 = 20
*/

int main()
{
    int a, b;
    printf("Enter the value a: ");
    scanf("%d", &a);
    printf("Enter the value b: ");
    scanf("%d", &b);
    printf("Before swapping, Value of a is %d and b is %d\n", a, b);

    a = a*b;
    b = a/b;
    a = a/b;
    
    printf("After swapping, Value of a is %d and b is %d\n", a, b);
    return 0;
}