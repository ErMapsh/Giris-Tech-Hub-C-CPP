#include <stdio.h>

int main()
{
    /*
        so lets find 32 bit address = 100000
        but negative interger on right hand side is undefined bahivour in the C language for right shift.

        32 = 100000
           = 100000 
        
    */

    printf("%d\n", 32 >> -1);


    /*
        32 = 100000
           = 010000 --> thats why its 16
    */
    printf("%d\n", 32 >> 1);

    printf("%d\n", 48 >> -1);
    return 0;
}