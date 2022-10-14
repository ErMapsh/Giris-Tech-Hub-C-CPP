/*
    WAP input 3 digit number and reverse it
*/

#include<stdio.h>

int main(){
    int n, rem, rev=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    rem = n % 10;
    printf("%d", rem);
    rev = rev + rem * 100;
    n = n /10;


    rem = n % 10;
    printf("%d", rem);
    rev = rev + rem * 10;
    n = n /10;

    rem = n % 10;
    printf("%d\n", rem);
    rev = rev + rem * 1;
    n = n /10;

    printf("The reverse value is %d\n", rev);
}