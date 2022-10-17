#include<stdio.h>

int main(){
    float age;
    printf("Enter your age: ");
    scanf("%f", &age);

    age>=18?printf("You are eligible\n"):printf("You are not eligible\n");
    printf(age>=18?"You are eligible\n":"You are not eligible\n");
    return 0;
}