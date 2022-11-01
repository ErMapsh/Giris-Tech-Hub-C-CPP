#include<stdio.h>

int main(){

    // check the three digit number is palindrome is not

    int num, rem, revNum = 0,temp;
    printf("Enter the number: ");
    scanf("%d", &num);
    temp = num;

    rem = num % 10;
    revNum = revNum + rem * 100;
    // revNum  +=  rem * 100;
    num = num/ 10;

    rem = num % 10;
    revNum = revNum +  rem * 10;
    // revNum  +=  rem * 10;
    num = num/ 10;

    rem = num % 10;
    revNum = revNum +  rem * 1;
    // revNum  +=  rem * 1;
    num = num/ 10;

    if(temp == revNum){
        printf("Number is Pallindrome...");
    }

    return 0;
}