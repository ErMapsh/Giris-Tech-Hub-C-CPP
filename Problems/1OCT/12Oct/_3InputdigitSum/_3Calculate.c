// WPA to input three digit number and calculate the sum of every digit

#include<stdio.h>

int main(){
    int a, sum = 0; 

    printf("Enter the a: ");
    scanf("%d", &a);//----> 123

    int rem = a % 10; // ---> 123 % 10 = 3
    sum += rem; // ----> 0 + 3 = 3
    a /= 10; // ---> 123 / 10 = 12

    int rem = a % 10; // ---> 12 % 10 = 2
    sum += rem; // ----> 3 + 2 = 5
    a /= 10; // ---> 12 / 10 = 1

    int rem = a % 10; // ---> 1 % 10 = 1
    sum += rem; // ----> 5 + 1 = 6
    a /= 10; // ---> 1 / 10 = 0

    printf("Sum is %d", sum);
    return 0;   
}