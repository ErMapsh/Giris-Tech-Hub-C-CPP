#include<stdio.h>
/*
    wap to check year is leap or not;
*/
int main(){

    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    year % 4 == 0? printf("Yes, year %d is leap year..", year): printf("No, year %d is not leap year", year);
    return 0;
}