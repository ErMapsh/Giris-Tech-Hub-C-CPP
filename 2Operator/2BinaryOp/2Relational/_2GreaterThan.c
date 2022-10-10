#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("3 > 5 is %s.\n", 3>5 == 1?"True":"False");
    printf("4 >= 4 is %s.\n", 4>=4 == 1?"True":"False");
    return 0;
}