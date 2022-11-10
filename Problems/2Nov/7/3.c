#include<stdio.h>
int main(int argc, char const *argv[])
{
    int sum = 0;
    for (int i = 1; i < 26; i++)
    {
        sum = sum + i;
    }

    printf("Sum of numbers from 1 to 25 is %d\n", sum);
    
    return 0;
}