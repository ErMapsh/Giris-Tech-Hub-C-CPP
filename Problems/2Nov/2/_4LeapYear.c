#include<stdio.h>
int main(int argc, char const *argv[])
{
    int year;
    printf("Enter the number: ");
    scanf("%d", &year);

    if(year % 4 == 0){
        printf("Enter year is leap year");
    }else{
        printf("Enter year is not leap year");
    }
    return 0;
}