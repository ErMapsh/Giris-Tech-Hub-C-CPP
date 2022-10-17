#include <stdio.h>

int main()
{
    /*  if sum of all angles is equal to equal to 180 then its a valid
        triangle.
        We have to get angle of side to check triangle is valid or not
    */

    int a, b, c, sum;
    printf("Enter a side angle: ");
    scanf("%d", &a);

    printf("Enter b side angle: ");
    scanf("%d", &b);

    printf("Enter c side angle : ");
    scanf("%d", &c);

    sum = a + b + c;

    ((sum == 180) && a != 0 && b != 0 && c != 0) ? printf("Triangle is valid\n") : printf("Triangle is not valid\n");

    return 0;
}