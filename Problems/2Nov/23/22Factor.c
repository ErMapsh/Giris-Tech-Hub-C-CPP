// 22. Write a C program to find all factors of a number.

#include<stdio.h>

int main(){

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("factor of %d is ", num);
    for (int i = 1; i <= num; i++)
    {
        if(num % i == 0){
            printf("%d ", i);
        }
    }
    
    return 0;
}