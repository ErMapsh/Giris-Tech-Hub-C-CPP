#include<stdio.h>
#include<math.h>
    /*
        WAP to enter P = Principle Amount, T = Time Period , R = RateOfInterest and calculate the Compound Interest.

        SI = (PricipleAmount * ((1 + (RateOfInterest/100))**TimePeriod))
    */  

int main(){
    float p, r ,t, CI;

    printf("Enter the principle (Amount): ");
    scanf("%f", &p);
    printf("Enter the Time Period (Year): ");
    scanf("%f", &t);
    printf("Enter the Rate Of Interest: ");
    scanf("%f", &r);

    CI = p * (pow((1 + (r / 100)), t));
    printf("The Compound interest is %.3f", CI);
    return 0;
}