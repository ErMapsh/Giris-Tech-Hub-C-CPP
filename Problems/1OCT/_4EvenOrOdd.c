#include<stdio.h>

int main(){
    int n, rem;
    printf("Enter the number: ");
    scanf("%d", &n);
    rem = n % 2;
    printf("Number is %s", rem == 0?"Even":"Odd");
}