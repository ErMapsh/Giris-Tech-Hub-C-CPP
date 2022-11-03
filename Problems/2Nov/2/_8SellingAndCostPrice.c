#include<stdio.h>

int main(int argc, char const *argv[])
{
    long int sellingPrice, costPrice, calculation;
    printf("Enter the Cost price: ");
    scanf("%ld", &costPrice);
    printf("Enter the Selling price: ");
    scanf("%ld", &sellingPrice);

    if(costPrice < sellingPrice){
        printf("Profit : %d", sellingPrice - costPrice);
    }else{
        printf("Loss : %d", costPrice - sellingPrice);
    }

   

    return 0;
}