#include<stdio.h>

int main(){
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    a>b == 1? printf("A is greater than B"):printf("A is less than B");
  

    return 0;
}