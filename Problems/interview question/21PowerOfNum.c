#include <stdio.h>

int main(){

    int num, power, cal = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the power: ");
    scanf("%d", &power);

    for (size_t i = 0; i < power; i++)
    {
        cal *= num;
    }
    printf("%d\n", cal);
    return 0;
}