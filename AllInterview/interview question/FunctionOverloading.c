#include <stdio.h>

int sum(int x, int y)
{
    return x + y;
}
int sum(int x, int y, int z)
{
    return x + y + z;
}
int main(int argc, char const *argv[])
{
    printf("%d --- %d", sum(1, 2), sum(1, 2, 4));// we just cant use fucntion overloading in c
    return 0;
}
