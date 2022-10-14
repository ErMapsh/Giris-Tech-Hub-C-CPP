#include<stdio.h>

int main(){

    int a, b, sum;
    printf("Enter the a: ");
    scanf("%d", &a);
    printf("Enter the b: ");
    scanf("%d", &b);

    sum = a+b;
    printf("Addition of %d and %d is %d\n", a, b, sum);

    return 0;
}