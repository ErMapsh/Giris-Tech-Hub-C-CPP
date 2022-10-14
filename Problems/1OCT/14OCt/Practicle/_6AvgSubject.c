#include<stdio.h>
#include<limits.h>

int main(){

    int s1, s2, s3, s4, s5; // memory allocation for int 
    float avg;// memory allocation for float

    printf("Enter subject 1 mark: ");
    scanf("%d", &s1);// getting input from users
    
    printf("Enter subject 2 mark: ");
    scanf("%d", &s2);

    printf("Enter subject 3 mark: ");
    scanf("%d", &s3);

    printf("Enter subject 4 mark: ");
    scanf("%d", &s4);

    printf("Enter subject 5 mark: ");
    scanf("%d", &s5);

    // Average
    avg = (s1 + s2 + s3 + s4 + s5) / 5;

    printf("Average is %.2f", avg );
    return 0;
}