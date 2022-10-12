// WPA to input three digit number and calculate the sum of every digit 

#include<stdio.h>

int main(){
    int a, sum = 0; 

    printf("Enter the a: ");
    scanf("%d", &a);

    for (int i = 0; i < 3; i++)
    {
        int rem = a % 10;
        sum += rem;
        a /= 10;
    }
    
    printf("Sum is %d", sum);
    return 0;   
}