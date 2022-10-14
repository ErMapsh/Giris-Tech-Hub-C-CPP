#include<stdio.h>

int main(){
    /*
        WAP to enter P = Principle Amount, T = Time Period , R = RateOfInterest and calculate the simple interest

        SI = (PricipleAmount * TimePeriod * RateOfInterest) / 100
    */  

    int P, R ,T;
    float SimpleInterest;

    printf("Enter the principle Amount: ");
    scanf("%d", &P);
    printf("Enter the Time Period: ");
    scanf("%d", &T);
    printf("Enter the Rate Of Interest: ");
    scanf("%d", &R);

    SimpleInterest = (P * T * R)/100;
    printf("Simple Interest is %.3f", SimpleInterest);
    return 0;
}