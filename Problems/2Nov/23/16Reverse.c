#include<stdio.h>

int main(){
    // 16. Write a C program to enter a number and print its reverse.
    int num, rem;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reverse of %d is ", num);
    while (num != 0)
    {
        rem =  num%10;
        printf("%d", rem);
        num /= 10;
    }
    
    
    return 0;
}