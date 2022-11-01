#include<stdio.h>

int main(){

    int price, qty;
    long int bill, finalbill;
    printf("Enter the Price of product: ");
    scanf("%d", &price);
    printf("Enter the quantity of product: ");
    scanf("%d", &qty);
    
    bill = price * qty;

    if (bill>=2000)
    {
        bill = bill * 80/100;
    }

    printf("The final bill is %ld", bill);

    return 0;
}