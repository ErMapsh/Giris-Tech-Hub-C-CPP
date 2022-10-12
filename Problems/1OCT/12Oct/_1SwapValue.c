#include<stdio.h>

int main(int argc, char const *argv[])
{   
    int a, b, temp;
    printf("Enter the value a: ");
    scanf("%d", &a);
    printf("Enter the value b: ");
    scanf("%d", &b);
    printf("Before swapping, Value of a is %d and b is %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping, Value of a is %d and b is %d\n", a, b);
    return 0;
}

