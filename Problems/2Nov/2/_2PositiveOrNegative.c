#include<stdio.h>

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if(num>=0){
        printf("Positive number\n");
    }else{
        printf("Negative numbers\n");
    }

    return 0;
}