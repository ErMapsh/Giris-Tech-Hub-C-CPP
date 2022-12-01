// 15. Write a C program to calculate product of digits of a number, its like factorial
#include<stdio.h>

int main()
{    
    long num, product = 1, temp;
    int rem;
    printf("Enter a num: ");
    scanf("%ld", &num);
    temp = num;

    while (num != 0)
    {   
        rem = num % 10;
        product *= rem;
        num /= 10;
    }
    printf("product is %ld \n", product);
    return 0;
}