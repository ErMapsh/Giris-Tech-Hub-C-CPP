#include <stdio.h>

void printNaturalNum(int);

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printNaturalNum(n);
    return 0;
}

void printNaturalNum(int x)
{
    static int count = 1;

    while (count <= x)
    {
        printf("%d ", count);
        count++;
        printNaturalNum(x);
    }
}