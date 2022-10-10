#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("3 != 5 is %s.\n", (3 != 5) == 1?"True":"False");// using ternary operator
    printf("5 != 5 is %s.\n", (5 != 5) == 1?"True":"False");// using ternary operator
    return 0;
}