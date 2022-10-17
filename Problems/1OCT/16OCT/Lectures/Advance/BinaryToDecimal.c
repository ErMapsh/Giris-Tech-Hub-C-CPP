#include<stdio.h>
#include<math.h>

int power(int base, int exp){
    int result = 1;

    // power not gone 0 until u should , multiply itself
    while(exp != 0){
        result *= base;
        --exp;
    }
    return result;
}

int howmanyDigitInBinary(int binary){
   int length = 0;
    while(binary != 0){
        binary = binary / 10;
        length++;
    }
    return length;
}

int main(int argc, char const *argv[])
{
    long int binary;
    int sum = 0 , rem, temp, lengthOfBits, base = 2;

    printf("enter the binary number: ");
    scanf("%ld", &binary);

    lengthOfBits = howmanyDigitInBinary(binary);
    for (int i = 0; i < lengthOfBits; i++)
    {
        rem = binary % 10;
        sum = sum + (rem * power(2, i));
        binary = binary / 10;
    }
    
    printf("%d", sum);



    return 0;
}