#include<stdio.h>

void display(int a[5]);
int main(){

    int a[5] = {10, 20, 30, 40, 50}, i, temp;

    printf("Value before reverse: ");
    display(a);

    for ( i = 0; i < 5/2; i++)
    {   
        temp = a[i];
        a[i] = a[4-i];
        a[4-i] = temp;
    }

    printf("Value after reverse: ");
    display(a);
    
    return 0;
}

void display(int a[5]){
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);   
    }
    printf("\n");
}