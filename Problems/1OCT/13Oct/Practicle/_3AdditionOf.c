#include<stdio.h>

int main(){
    /* Write a c program to perform addition of one 
    integer and one float */
    int a;
    float b, sum;

    printf("Enter the a: ");
    scanf("%d", &a);
    printf("Enter the b: ");
    scanf("%f", &b);

    sum = a + b;

    // printf("The addition of %d and %f is %.3f", a, b, sum);
    printf("The addition of %d and %f is %.3f", a, b, a+b);
}