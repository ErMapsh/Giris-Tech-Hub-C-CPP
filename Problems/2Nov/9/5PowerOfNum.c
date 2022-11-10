#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double num;
    int power;
    printf("Enter the number: ");
    scanf("%lf", &num);
    printf("Enter the power: ");
    scanf("%d", &power);

    printf("%.0lf", pow(num, power));
    return 0;
}