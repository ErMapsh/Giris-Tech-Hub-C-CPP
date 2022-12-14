#include<stdio.h>

void printTable(int *ptr){
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", *ptr, i, *ptr * i);
    }
    
}
int main()
{   
    int b;
    printf("Enter a number: ");
    scanf("%d", &b);
    printTable(&b);
    return 0;
}