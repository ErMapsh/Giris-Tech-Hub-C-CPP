#include <stdio.h>

int main()
{
    int a = 10, *ptr;
    ptr = &a;

    printf("Value of a before: %d\n", a);
    *ptr = 20;
    printf("Value of a after change using pointer: %d\n", a);
    
    ptr= NULL;
    return 0;
}