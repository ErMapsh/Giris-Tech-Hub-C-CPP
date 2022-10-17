#include<stdio.h>
#include<math.h>


int myLog(double x, int base){
    return log(x) / log(base); 
}

int main(void){
    double num = 12.0; 
    int base = 2; // base

    // printf("Enter your number: ");
    // scanf("%lf", &num);

    printf("log2(%.1lf) = %d\n", num, myLog(num, base));
    return 0;
}