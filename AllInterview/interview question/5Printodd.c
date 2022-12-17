#include<stdio.h>
int main()
{
    // 5. Write a C program to print all odd number between 1 to 100

    int i = 1, n = 100;
    while (i <= n)
    {   
        if(i % 2 == 1){
            printf("%d ", i);
        }
        i++;
    }
    
    return 0;
}