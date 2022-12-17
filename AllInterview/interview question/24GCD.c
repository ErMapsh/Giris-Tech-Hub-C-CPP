// 24. Write a C program to find HCF (Highest Common Factor) (GCD--> greatest common divisor) of two numbers.

#include <stdio.h>

int main()
{

    int num1, num2, min;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);

    // to hold GCD
    int gcd = 1;

    // first we have to find min, cause min value hoti hai vo apne num tak div karega, aur max number ko min number ke aage divide karne ka kuch meaning hi nahi hai
    min = num1 < num2 ? num1 : num2;

    // lets divide both number by 1 to min
    for (int i = 1; i < min; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }

    printf("GCD is %d\n", gcd);
}