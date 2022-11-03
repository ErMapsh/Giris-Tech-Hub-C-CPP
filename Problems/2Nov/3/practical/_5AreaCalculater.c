#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    printf("---Operations----\n1.Triangle\n2.Rectangle\n3.Circle\n4.Square\nEnter Your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        float b, h;
        printf("Enter the base: ");
        scanf("%f", &b);
        printf("Enter the height: ");
        scanf("%f", &h);
        printf("Area of Triangle is %.1f\n", (h * b) / 2);
        break;
    case 2:
        float l, w;
        printf("Enter the length: ");
        scanf("%f", &l);
        printf("Enter the width: ");
        scanf("%f", &w);
        printf("Area of Rectangle is %.1f\n", (l * w));
        break;
    case 3:
        double r;
        printf("Enter the radius: ");
        scanf("%lf", &r);
        printf("Area of Rectangle is %.1f\n", (M_PI * (pow(r, 2))));
        break;
    case 4:
        double a;
        printf("Enter the value: ");
        scanf("%lf", &a);
        printf("Area of Rectangle is %.1f\n", ((pow(a, 2))));
        break;
    default:
        printf("Invalid choice...\n");
        break;
    }
    return 0;
}