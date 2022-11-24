#include<stdio.h>

int main(){

    int num, i = 1, fact = 1;
    printf("Enter the number: ");
    scanf("%d", &num);

    do
    {   
       i++; 
       fact *= i;
    } while (i<num);
    printf("Factorial of %d is %d", num, fact);
    return 0;
}