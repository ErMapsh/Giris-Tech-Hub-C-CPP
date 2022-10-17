#include<stdio.h>

int main(){
    signed int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    num > 0?printf("%d is Positive number", num): num == 0?printf("%d is zero", num):printf("%d is Negative number", num);
}