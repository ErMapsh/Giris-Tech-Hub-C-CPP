#include<stdio.h>

int swapNumber(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 10, b = 20;
    printf("Before swapping %d and %d\n", a, b);
    swapNumber(&a, &b);
    printf("after swapping %d and %d\n", a, b);

    return 0;
}