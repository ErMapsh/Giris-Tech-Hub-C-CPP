#include<stdio.h>
int main(int argc, char const *argv[])
{   
    // we use scanf function to get data from user
    int a, b, c;
    printf("Enter a: ");
    scanf("%d", &a); // & ampersand is give direction of variale address

    printf("Enter b: ");
    scanf("%d", &b);

    c = a+b;
    printf("The Addition is %d\n", c);
    return 0;
}