#include<stdio.h>

int main(){
    int n, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    int i = 2;
    do
    {
        printf("%d ", i);
        sum += i;
        i+=2;
    } while (i < n);
    printf("\nsum of evens is : %d", sum);

    return 0;
}