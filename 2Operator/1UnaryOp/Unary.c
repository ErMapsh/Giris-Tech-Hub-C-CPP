#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 5;
    printf("1.PreIncrement of ++a is %d\n", ++a);
    printf("2.PreDecrement of --a is %d\n", --a);

    int b = 8;
    printf("3.PostIncrement of b++ is %d\tbut b is begin now %d\n", b++, b);
    printf("4.PostDecrement of b-- is %d\tbut b is begin now %d\n", b--, b);
    return 0;
}