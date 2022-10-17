#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, rem, rev = 0, temp;
    printf("Enter three digit number: ");
    scanf("%d", &num); //121
    temp = num; 

    rem = temp % 10; //121 % 10 = 1
    rev = rev + rem * 100; // 0 + 1*100 = 100
    temp = temp / 10;// 121/10 = 12

    rem = temp % 10;// 12 % 10 = 2;
    rev = rev + rem * 10; // 100 + 2*10 = 120
    temp = temp / 10;// 12 / 10 = 1

    rem = temp % 10;// 1%10 = 1
    rev = rev + rem * 1; // 120 + 1 = 121
    temp = temp / 10; // 1/ 10 = 0; // we have to go until num == temp == 0;

    num == rev ? printf("%d is Palidrome..\n", rev) : printf("%d is not Palidrome..\n", rev);

    printf(temp == rev? "%d is Palidrome..\n": "%d is not Palidrome..\n", rev);
    return 0;
}

/* 
    Advance:
     we can also use here log10(n) = its give how many time number can divisiable.
     thats using we can take a loop for rem
*/