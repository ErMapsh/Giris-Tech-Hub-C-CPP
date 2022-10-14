#include<stdio.h>

int main(){
    int num, rem;
    printf("Enter 3 digit number : ");
    scanf("%d", &num);

    // basic logic

    rem = num % 10;
    printf("%d ", rem);
    num = num /10;

    rem = num % 10;
    printf("%d ", rem);
    num = num /10;

    rem = num % 10;
    printf("%d ", rem);
    num = num /10;

    
    return 0;
}