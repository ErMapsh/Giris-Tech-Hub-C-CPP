#include<stdio.h>

int main(int argc, char const *argv[])
{
    /*
    && opeartor --> And its like multiplication
    0 * 0 ---> 0
    0 * 1 ---> 0
    1 * 0 ---> 0
    1 * 1 ---> 1
    */

    printf("Value of (1 == 1) && (2 == 2) is %d\n", (1 == 1 ) && (2 == 2));
    printf("Value of 1 && 1 is %d\n", 1 && 1);
    printf("Value of 0 && 1 is %d\n", 0 && 1);

    return 0;
}
