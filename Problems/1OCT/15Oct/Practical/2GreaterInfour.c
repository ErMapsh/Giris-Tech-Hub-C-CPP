#include<stdio.h>

int main(){

    int a, b, c, d, max;
    printf("Enter the a: ");
    scanf("%d", &a);

    printf("Enter the b: ");
    scanf("%d", &b);

    printf("Enter the c: ");
    scanf("%d", &c);
    
    printf("Enter the d: ");
    scanf("%d", &d);

    // my logic
    max = a>b? a:b; 
    max = max>c? max:c; 
    max = max>d? max:d; 

    printf("The greatest number is: %d\n\n", max);

    // nested conditional operator
    (a>b && b>c && c>d) ? printf("A(%d) is greater...\n", a): 
    (b>a && b>c && b>d)?printf("B(%d) is greater...\n", b):
    (c>a && c>b && c>d)?printf("C(%d) is greater..", c): 
    (d>a && d>b && d>c) ? printf("D(%d) is greater...\n", d) : printf("Something wrong, Try again\n");

    return 0;
}