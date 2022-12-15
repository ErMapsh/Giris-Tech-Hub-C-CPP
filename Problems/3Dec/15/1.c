#include<stdio.h>

/* Declaration*/
int Cube(int *); 

int main(){
    int a;

    printf("Enter the number :");
    scanf("%d", &a);

    printf("Cube of %d is %d ", a, Cube(&a)); // calling
    return 0;
}

int Cube(int *a){ // defination
    return *a * *a * *a;    
}