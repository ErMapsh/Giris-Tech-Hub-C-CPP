#include<stdio.h>
int main(int argc, char const *argv[])
{   
    // we use printf for console printing/message
    int a, b, c;
    // here the main issue is value are fix, but we any by chance we want value by different user
    a = 10;
    b = 20;
    c = a+b;
    printf("The Addition is %d\n", c);
    return 0;
}