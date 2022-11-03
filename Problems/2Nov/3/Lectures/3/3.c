#include<stdio.h>

int main(){
    int a, b;
    printf("Enter total number of gaurds are there: ");
    scanf("%d", &a);
    printf("Enter number of gaurd ezio wants: ");
    scanf("%d", &b);

    if(a<b){
        printf("No, he cant manupulate");
    }else{
        printf("Yess");
    }
    return 0;
}