#include <stdio.h>

int main()
{
    /*
    32. Write a C program to check whether a number is Perfect number or not
        For example: 6 is the first perfect number
        Proper divisors of 6 are 1, 2, 3
        Sum of its proper divisors = 1 + 2 + 3 = 6.
        Hence 6 is a perfect number.
    */
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++)
    {
        if(num % i == 0){
            sum += i;
        }
    }
    
    sum == num?printf("%d is Perfect number\n", num):printf("%d is not perfect number\n", num);

    return 0;
}