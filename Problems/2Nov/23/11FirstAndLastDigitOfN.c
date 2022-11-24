#include <stdio.h>
#include <math.h>

int main()
{

    signed long num, temp; // signed long range have -2,147,483,648 to +2,147,483,647
    printf("Enter a number: ");
    scanf("%ld", &num);
    temp = num;

    int len = 0;
    while (temp != 0)
    {
        temp /= 10;
        len++;
    }
    printf("Length of digit is %d\n", len);

    /* here is the thing long only store 10 digit number with belongs to his range. we can use here log10 but i gonna use my logic*/
    int logic = pow(10, len - 1), temp2 = num;


    printf("First number of digit is %d and last number of digit is %d.\n", temp2 / logic, temp2 % 10);

    return 0;
}