#include<stdio.h>

int main(){
    int a;
    printf("Enter a year:");
    scanf("%d", &a);

    a % 4 == 0? printf("Yes, %d is leap year..\n", a): printf("Not at all, %d is not leap year", a);
    return 0;
}