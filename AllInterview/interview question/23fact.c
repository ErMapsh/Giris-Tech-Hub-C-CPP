// 23. Write a C program to calculate factorial of a number

#include<stdio.h>

int main(){

    int num, temp, fact = 1;
    printf("Enter a num: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        fact *= temp;
        temp--;   
    }

    printf("Fact is %d", fact);
    
}