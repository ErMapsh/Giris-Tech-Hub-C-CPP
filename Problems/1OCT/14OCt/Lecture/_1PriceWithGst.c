#include <stdio.h>

/*
    wap to input the quantity and rate of product and calculate its bill with 18% gst

    alogrithm: 

    1. we have to calculate the totalPrice = quantity * price
    2. then we have to find gst on total price , gst = totalPrice * 18 / 100
    3. add totalPrice and gst ---> totalPrice = totalPrice + gst

*/

int main(){
    int qty, price ,totalPrice, gst;

    printf("Enter Quantity of Product: ");
    scanf("%d", &qty);

    printf("Enter Price of Product: ");
    scanf("%d", &price);

    // calculating total quantity price
    totalPrice = qty * price;

    // calculating gst on total price
    gst = totalPrice * 18/ 100;

    // total quantity price and gst 
    totalPrice = totalPrice + gst;

    printf("The total price with gst is %d\n", totalPrice);

    return 0;
}