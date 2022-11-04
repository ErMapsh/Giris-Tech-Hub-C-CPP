#include<stdio.h>

int main(){
    int qty, choice; 
    printf("Enter quantity of food: ");
    scanf("%d", &qty);
    printf("1.Burger\n2.French Fries\n3.Pizza\n4.Sandwiches\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Total Bill is %d", qty * 200);
        break;
    case 2:
        printf("Total Bill is %d", qty * 50);
        break;
    case 3:
        printf("Total Bill is %d", qty * 500);
        break;
    case 4:
        printf("Total Bill is %d", qty * 150);
        break;
    
    default:
        printf("Invalid input...Try again");
        break;
    }
    return 0;
}