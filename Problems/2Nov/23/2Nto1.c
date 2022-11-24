#include<stdio.h>
int main()
{
    // 2. Write a C program to print all natural numbers in reverse (from n to 1). - using while loop
    int n, i = 1;
    printf("Enter a num: ");
    scanf("%d", &n);

    while (n>=i)
    {
        printf("%d ", n);
        n--;
    }
    
    return 0;
}