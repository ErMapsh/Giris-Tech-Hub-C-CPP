#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    printf("1.Triangle\n2.Rectangle\n3.Cirlce\n4.Square\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {

    case 1:
        int h, b;
        printf("Enter Height of triangle: ");
        scanf("%d", &h);
        printf("Enter Base of trianlge: ");
        scanf("%d", &b);
        printf("Area of triangle is %d\n", 1 * h * b / 2);
        break;

    case 2:
        int l, w;
        printf("Enter length of Rectangle: ");
        scanf("%d", &l);
        printf("Enter width of Rectangle: ");
        scanf("%d", &w);
        printf("Area of Rectangle is %d\n", l * w);
        break;
    case 3:
        float r;
        printf("Enter radius of circle: ");
        scanf("%f", &r);
        float cal = M_PI * r * r;
        printf("Area of circle is %f", cal);
        break;
    case 4:
        int s;
        printf("Enter side of sqr: ");
        scanf("%d", &s);
        printf("Area of square is %d", s * s);
        break;
    default:
        printf("Invalid choice...");
        break;
    }
    return 0;
}